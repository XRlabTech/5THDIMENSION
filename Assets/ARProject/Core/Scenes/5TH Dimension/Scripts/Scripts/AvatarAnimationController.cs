using UnityEngine;

public class AvatarAnimationController : MonoBehaviour
{
    [SerializeField] private RuntimeAnimatorController avatarController;

    private Animator animator;

    public void StartWalkAnimation()
    {
        this.animator.SetBool("isMoving", true);
    }

    public void StopWalkAnimation()
    {
        this.animator.SetBool("isMoving", false);
    }

    public void StartTurnAnimation(float angle)
    {
        if (angle > 0)
        {
            this.animator.SetBool("isTurningRight", true);
        }
        else
        {
            this.animator.SetBool("isTurningLeft", true);
        }
    }

    public void StopTurnAnimation()
    {
        this.animator.SetBool("isTurningLeft", false);
        this.animator.SetBool("isTurningRight", false);
    }
    public bool IsMoveAnimatorPlaying()
    {
        return animator.GetCurrentAnimatorStateInfo(0).IsName("Walking");
    }

    public bool IsTurnAnimatorPlaying()
    {
        return animator.GetCurrentAnimatorStateInfo(0).IsName("RightTurn") || animator.GetCurrentAnimatorStateInfo(0).IsName("LeftTurn");
    }

}

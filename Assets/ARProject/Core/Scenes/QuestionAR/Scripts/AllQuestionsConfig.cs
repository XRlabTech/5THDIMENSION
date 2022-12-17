using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "All Questions Config", fileName = "Questions config.asset")]
public class AllQuestionsConfig : ScriptableObject
{
   
        public string currentMarkerID;
       //   public string currentQuestionTextID;

		[Serializable]
		public class QuestionList
		{
            public MarkerType MarkerId;

            public int Day;

            public int Month;

            public int Year;
    
			public string Question;
      
            public bool Answer;
            public bool QuestionAnswered;
            
			public string AnswerAText;

			public string AnswerBText;

            public string QuestionAnswerUrl;
		}

		[SerializeField]
		public List<QuestionList> questionItem;

		public enum MarkerType
		{
			Deer = 0,
			Chicken = 1,
            Cow = 2,
            Horse = 3,
            Sheep = 4,
            Pig= 6,
            Rabbit = 7
        }
}


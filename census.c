#include <stdio.h>
int main ()
{ /* main */

/*
*****************************
* Local Variable Subsection *
*****************************
*
* average_weekly_vegetables_servings_eaten: amount of vegetables eaten in
a week
* average_daily_text_messages_received: daily text messages the subject
receives
* zip_code_basic_part: zip code for the subject
*/
float average_weekly_vegetables_servings_eaten;
float average_daily_text_messages_received;
int zip_code_basic_part;
int zip_code_addon_part;
/*
*************************
*** Execution Section ***
*************************
*
***********************
* Greeting Subsection *
***********************
*
* Describe what the program does.
*/
printf("I am working for the United States Census Bureau,\n");
printf("I will ask you three questions.\n");
/*
********************
* Input Subsection *
********************
*/
printf("How many servings of vegetables are eaten per week?\n");
scanf("%f", &average_weekly_vegetables_servings_eaten);
/*
* Ask the text message question.
*/
printf("What is the average number of text messages you receive per day?\n");
scanf("%f", &average_daily_text_messages_received);
/*
* Ask them for their zip code.
*/
printf("What is your nine digit zipcode?\n");
scanf("%d %d", &zip_code_basic_part,&zip_code_addon_part);
/*
*********************
* Output Subsection *
*********************
*/
/*
* The subject&#39;s response for the vegetable question.
*/
printf("I eat %f servings of vegetable per week.\n",average_weekly_vegetables_servings_eaten);

/*
*The subject&#39;s response to the number of text messages.
*/
printf("I receive %f per day.\n", average_daily_text_messages_received);
/*
*The subject enters in their zip code.
*/
printf("My zip code is %d-%d\n",zip_code_basic_part,zip_code_addon_part);
} /* main */
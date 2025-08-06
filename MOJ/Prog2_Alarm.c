/* 
    "Alarme do Museu" Treino Livre - MOJ
    A program that calculates the total time an alarm is active in a museum,
    based on the detection times of alarms and a specified alarm time.
*/
#include <stdio.h>
int main ()
{
    short totalAlrms;
    int totalTime=0;
    scanf("%hd", &totalAlrms);
    short detections[totalAlrms];

    for(short i=0; i<totalAlrms; i++)
    {
        scanf("%hd", &detections[i]);
    }
    short alarm_time;
    scanf("%hd", &alarm_time);

    for(short i=0; i<totalAlrms; i++)
    {
        if(detections[i]+alarm_time>detections[i+1] && i+1<totalAlrms)
        {
            totalTime += detections[i+1] - detections[i];
            continue;
        }
        // if two alarms overlap, only the interval between them is counted
        totalTime += alarm_time;
    }
    printf("%d", totalTime);
    return 0;
}
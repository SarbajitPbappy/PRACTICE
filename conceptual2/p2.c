#include<stdio.h>
int main()
{
    int floor,room,nextRoom=101,nextFloor=2,ans=0;
    scanf("%d %d",&floor,&room);
    int i=1;
    while(i<=(floor*room))
    {
        ans+=nextRoom;
        nextRoom+=1;
        if(i%room==0)
        {
            nextRoom=(100*nextFloor)+1;
            nextFloor+=1;
        }
        
        i++;
    }
    printf("%d\n",ans);
}
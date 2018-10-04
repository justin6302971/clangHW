#include<stdio.h>
//計算房間最多可貼幾片地磚
int TileN(int RoomW,int RoomH,int TileW ,int TileH);
int main(int argc, char const *argv[])
{

    int RoomW=0,RoomH=0,TileW=0,TileH=0;
    int n;
    printf("請依序輸入房間長寬和地磚長寬\n");
    n = scanf("%d %d %d %d", &RoomH, &RoomW,&TileW,&TileH);
    while(n==4&&n!=EOF){
        
        int numOfTiles=TileN(RoomW,RoomH,TileW,TileH);
        printf("房間最多可貼%d片地磚\n\n",numOfTiles);

        //reset input
        printf("請依序輸入房間長寬和地磚長寬\n");
        n = scanf("%d %d %d %d", &RoomH, &RoomW,&TileW,&TileH);
    }
    
    return 0;
}
int TileN(int RoomW,int RoomH,int TileW ,int TileH){
    int x1,x2,y1,y2;

    x1=RoomW/TileW;
    y1=RoomH/TileH;

    x2=RoomW/TileH;
    y2=RoomH/TileW;

    if(x1*y1>=x2*y2){
        return x1*y1;
    }else{
        return x2*y2;
    }
}

#include <stdio.h>
int main(){
int n ,i;
char c;
scanf("%d %c",&n,&c);
//a
if ( c=='a'){
for(i=1;i<=n;i++)
    printf("%d ",i);
}
//d
else if(c=='d'){
    for(i=n;i>=1;i--)
    printf("%d ", i);


}


}

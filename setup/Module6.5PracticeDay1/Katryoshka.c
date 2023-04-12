#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    long long int eye, face, body, min = 0, ans = 0;

    scanf("%lld %lld %lld", &eye, &face, &body);

    if (eye < face && eye < body)
    {
        min = eye;
    }
    else if (face < eye && face < body)
    {
        min = face;
    }
    else{
        min = body;
    }
    ans = min;
    eye = eye - min;
    face = face - min;
    body = body - min;
    eye = eye / 2;
    if (eye <= body)
    {
        ans += eye;
    }
    if (eye >= body)
    {
     ans += body;
    }
    
    printf("%lld", ans);
    

    return 0;
}

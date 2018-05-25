#include <stdio.h>

float square(float a, float b) {
        return ((a) * (b));
}




float volume_without_typedef( float *a, float *b, float *h, float( * pAction )( float, float ) ) {
        return ( pAction( *a, *b ) * *h );
}

int main() {
        float a,b,h;
        float *wa, *wb, *wh;
        printf("Give values: a, b, h(height):\n");
        scanf("%f %f %f", &a,&b,&h);
        wa=&a;
        wb=&b;
        wh=&h;
        //printf("Volume = %f\n", volume1( wa, wb, wh, square ));
        printf("Volume without typedef = %f\n", volume_without_typedef( wa, wb, wh, square ));
        return 0;
}

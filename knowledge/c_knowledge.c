#include <stdio.h>
#define min_t(type,x,y) \
        ({type __x=(x); type __y=(y); __x<__y?__x:__y;})
#define min(x,y) \
        ({const typeof(x) __x=x;const typeof(y) __y=y;(void)(&__x==&__y);__x<__y?__x:__y;})
#define pr_debug(fmt,arg...) \
        printf(fmt,##arg)

int main(){
        int ia,ib,mini;
        float fa,fb,minf;
        ia=1;ib=2;
        fa=1.0;fb=2.0;
//Use define min_t
        mini=min_t(int,++ia,++ib);
        minf=min_t(float,fa,fb);
        printf("min_t: min int: %d\n",mini);
        printf("min_t: min float: %f\n",minf);
//Use define min
        mini=min(ia,ib);
        minf=min(fa,fb);
        printf("min: min int: %d\n",mini);
        printf("min: min float: %f\n",minf);
        pr_debug("Test print 1 without arg\n");
        pr_debug("Test print with ia: %d and fa: %f\n",ia,fa);
        return 0;
}

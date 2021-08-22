# include < stdio .h >
# include < string .h >
main () {
char s1 [50] , s2 [30];
int i , j , flag =0;
printf ("\ nEnter String 1 :");
gets ( s1 );
printf ("\ nEnter String 2 :");
gets ( s2 );
for ( i =0 , j =0; s1 [ i ]!= \0 && s2 [ j ]!= \0 ; i ++ , j ++)
{
if( s1 [ i ]!= s2 [ j ])
{
flag ++;
break ;
}
}
if( flag ==0)
printf ("\ nTwo strings are equals ");
else
printf ("\ nTwo strings are not equal ");
}

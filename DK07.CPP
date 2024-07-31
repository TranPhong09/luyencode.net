
#include <bits/stdc++.h>
using namespace std;

int main ()

{
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
double a, b, c, delta, x1, x2;
cin >> a >> b >> c;
if ( a == 0 )
{
    if ( b == 0 )
    {
        if ( c == 0 )
        {
            cout <<" WOW "<< endl;
        }
        else
        {
            cout <<" NO "<< endl;
        }
    }
    else
    {
        cout << fixed << setprecision(2) << -c / b << endl;
    }
}
else
{
    delta = pow(b, 2) - ( 4 * a * c );
    if ( delta > 0 )
    {
        x1 = ( -b + sqrt( delta )) / ( 2 * a );
        x2 = ( -b - sqrt( delta )) / ( 2 * a );
        cout << fixed << setprecision(2) << min( x1, x2 ) <<" "<< max( x1, x2 ) << endl;
    }
    else if ( delta == 0 )
    {
        double xkep = -b / ( 2 * a );
        cout << fixed << setprecision(2) << xkep << endl;
    }
    else
    {
        cout <<" NO "<< endl;
    }
}
return 0;
}
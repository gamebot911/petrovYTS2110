#include <iostream>

void swap2(int& p1, int& p2);
void mean(float x, float y, float& aMean, float& gMean);
int sing(int& x);
int main()
{
    int a;
        std::cout << "Wright X ";
        std::cin >> a;
        sing(a);
        std::cout << a;

 /*
    float a, b, c, d;
    float aM = 0;
    float gM = 0;
    std::cout << "Wright A B C D ";
    std::cin >> a >> b >> c >> d;
    mean(a, b, aM, gM);
    std::cout << aM << " " << gM << '\n';
    mean(a, c, aM, gM);
    std::cout << aM << " " << gM << '\n';
    mean(a, d, aM, gM);
    std::cout << aM << " " << gM << '\n';
    */

/*
    int a, b;
    a = 13;
    b = 27;
    swap2(a, b);

    std::cout << a << " " << b;
*/

/*
    float xA, yA, xP, yP;
    int n;
    std::cout << "Wright xA ";
    std::cin >> xA;
    std::cout << "Wright yA ";
    std::cin >> yA;
    std::cout << "N points ";
    std::cin >> n;
    for (int i = 0; i <= n;i++) {
        std::cout << "Wright xP ";
        std::cin >> xP;
        std::cout << "Wright yP ";
        std::cin >> yP;
        float d = sqrt(((xA - xP) * (xA - xP)) + ((yA - yP) * (yA - yP)));
        std::cout << "Rastoianie do point = " << d<<"\n";
    }
*/

/*
    int cena;
    int n;
    std::cout << "Wright Kol-vo KG ";
    std::cin >>n;
    std::cout << "Wright cenu KG ";
    std::cin >> cena;
    for (int i = 1; i <= n; i++) {
        int sum = i * cena;
        std::cout << sum << " Cena za " << i << " KG " << "\n";
    }
    */

/*
    int k = 1;
    float p = 10;
    float probeg_sum = 10;
    float probeg_den = 10;
    p /= 100;

    while (probeg_sum < 200) {
        probeg_den = probeg_den + (1 + p);
        probeg_sum += probeg_den;
        k += 1;
    }
    std::cout << "Probeg sum = " << probeg_sum <<"\n" << "Kol-vo dnei = " << k;

*/

/*
    int n, k = 0;
    std::cout << "Write HM Student \n";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        float h;
        std::cout << "Write height Student \n";
        std::cin >> h;
        if (h > 175)
            k++;
    }

    std::cout << k << " stident height 175 ";
    */

/*
    int n, k = 1;
    std::cout << "write n \n";
    std::cin >> n;
    while (k * k < n)
        k++;
    k--;
        std::cout << "k= " << k;
*/

/*
    int a, b, c, k = 0;
    std::cout << "Write A \n";
    std::cin >> a;
    std::cout << "Write B \n";
    std::cin >> b;
    std::cout << "Write C \n";
    std::cin >> c;

    while (a >= c) {
        a -= c;
        while (b >= c) {
            b -= c;
            k++;
        }
    
    }
    std::cout << "ATWET "<< k;

    */

/*
    float f, h, x = -3, fx = 7;
    std::cout <<"Write interval \n";
    std::cin >>h;
    while (x < fx) {
        f = x * x * 4 + 7 * x - 2;
        std::cout << x << "\t" << f << "\n";
        x += h;
    }
    */
}
 
int sing(int& x) {
    if (x < 0)
        return x = -1;
    else
        if (x > 0)
            return x = 1;
        else
            return x = 0;
}

void mean(float x, float y, float& aMean, float& gMean) {
    aMean = (x + y) / 2;
    gMean = sqrt(x * y);
}

void swap2(int& p1, int& p2) {
    int p3;
    p3 = p1;
    p1 = p2;
    p2 = p3;
}
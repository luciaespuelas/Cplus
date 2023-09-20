#include <iostream>
using namespace std;

int main(){
    const float Dagua=1.0;
    const float Dgasolina=0.68 ;
    const float Dkero= 0.8;
    const float Dmer=13.6;
    cout<< Dagua, Dgasolina , Dkero,  Dmer;
    float masa, volumen;
    char sustancia,unidad;
    cout<<"Indica la sustancia con la que vamos a trabajar:\n agua: teclea 'a' o 'A'\n gasolina: teclea 'g' o 'G' \n keroseno: teclea 'k' o 'K'\n mercurio: teclea 'm' o 'M'\n";
    cin>> sustancia;

    cout<<"Indica la masa (cantidad y unidades de medida): \n kilo: teclea 'k' o 'K'\n libra: teclea 'l' o 'L'\n onza: teclea 'o' o 'O'\nmasa: ";
    cin>> masa;
    if (masa<0) //control masa
        cout<<"no puede ser esa masa";

    cout<< "unidades:";
    cin>> unidad;
    if ((unidad=='L')||(unidad=='l'))
        masa=masa*0.454;
        else if ((unidad=='o')||(unidad=='O'))
            masa=masa*0.0283;
                else if ((unidad=='k')||(unidad=='K'))
                    masa=masa;
                        else cout<<"unidades incorrectas"; //control unidades
    cout<< masa;
    if ((sustancia=='a')||(sustancia=='A'))
            volumen=masa/Dagua;
            else if ((sustancia=='g')||(sustancia=='G'))
                volumen=masa/Dgasolina;
                    else if ((sustancia=='k')||(sustancia=='K'))
                    volumen=masa/Dkero;
                    else if ((sustancia=='m')||(sustancia=='M'))
                        volumen=masa/Dmer;
                            else cout<<"sustancia incorrecta";// me da error de que cuando la division me da un numero con muchos decimales (caso"m""10""0" vol=0.03) la division pone unicamente 0
    cout<<"el volumen total sera de: "<< volumen<<"l";

return 0;
}

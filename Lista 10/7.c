#include <stdio.h>
#include <math.h>
struct z {
	float real, imaginario1;
};

struct w {
	float rea2, imaginario2;
};

struct sum {
struct z complexo1;
struct w complexo2;
}soma;

int main (){
	float sumr, sumi, subr, subi, mulr, muli, modz, modw;
	printf ("Informe a parte real do complexo Z:	");
	scanf ("\n\n%f", &soma.complexo1.real);
	fflush (stdin);
	printf ("Informe a parte real do complexo W:	");
	scanf ("\n\n%f", &soma.complexo2.rea2);
	fflush (stdin);
	printf ("Informe a parte imaginaria (sem o I) do complexo Z:	");
	scanf ("\n\n%f", &soma.complexo1.imaginario1);
	fflush (stdin);
	printf ("Informe a parte imaginaria (sem o I) do complexo W:	");
	scanf ("\n\n%f", &soma.complexo2.imaginario2);
	fflush (stdin);
	sumr = (soma.complexo1.real+soma.complexo2.rea2);
	subr = (soma.complexo1.real-soma.complexo2.rea2);	
	sumi = (soma.complexo1.imaginario1+soma.complexo2.imaginario2);
	subi = (soma.complexo1.imaginario1-soma.complexo2.imaginario2);
	mulr = ((soma.complexo1.real*soma.complexo2.rea2)+((soma.complexo1.imaginario1*soma.complexo2.imaginario2)*(-1)));
	muli = ((soma.complexo1.real*soma.complexo2.imaginario2) + (soma.complexo1.imaginario1*soma.complexo2.rea2));
	
if (((soma.complexo1.real*soma.complexo1.real) + (soma.complexo1.imaginario1*soma.complexo1.imaginario1)) >= 0){
		modz = sqrt((soma.complexo1.real*soma.complexo1.real) + (soma.complexo1.imaginario1*soma.complexo1.imaginario1));
	}
	else{
		modz = -1;	
		}
if (((soma.complexo2.rea2*soma.complexo2.rea2) + (soma.complexo2.imaginario2*soma.complexo2.imaginario2)) >= 0){
		modw = sqrt((soma.complexo2.rea2*soma.complexo2.rea2) + (soma.complexo2.imaginario2*soma.complexo2.imaginario2));
	}
	else{
		modw = -1;	
		}
	
if ((soma.complexo1.imaginario1 < 0) && (soma.complexo2.imaginario2 > 0)){
			printf ("\n\n(%.0f-%.0fi) + (%.0f+%.0fi) = %.0f+%.0fi", soma.complexo1.real, soma.complexo1.imaginario1, soma.complexo2.rea2, soma.complexo2.imaginario2, sumr, sumi);
	}
	else if ((soma.complexo1.imaginario1 < 0) && (soma.complexo2.imaginario2 <0)){
			printf ("\n\n(%.0f-%.0fi) + (%.0f%.0fi) = %.0f+%.0fi", soma.complexo1.real, soma.complexo1.imaginario1, soma.complexo2.rea2, soma.complexo2.imaginario2, sumr, sumi);
	}
	else if ((soma.complexo1.imaginario1 > 0) && (soma.complexo2.imaginario2 >0)){
			printf ("\n\n(%.0f+%.0fi) + (%.0f+%.0fi) = %.0f+%.0fi", soma.complexo1.real, soma.complexo1.imaginario1, soma.complexo2.rea2, soma.complexo2.imaginario2, sumr, sumi);
	}
	else if ((soma.complexo1.imaginario1 > 0) && (soma.complexo2.imaginario2 < 0)){
		printf ("\n\n(%.0f+%.0fi) + (%.0f%.0fi) = %.0f+%.0fi", soma.complexo1.real, soma.complexo1.imaginario1, soma.complexo2.rea2, soma.complexo2.imaginario2, sumr, sumi);
	}

if ((soma.complexo1.imaginario1 < 0) && (soma.complexo2.imaginario2 > 0)){
			printf ("\n\n(%.0f-%.0fi) - (%.0f+%.0fi) = %.0f+%.0fi", soma.complexo1.real, soma.complexo1.imaginario1, soma.complexo2.rea2, soma.complexo2.imaginario2, subr, subi);
	}
	else if ((soma.complexo1.imaginario1 < 0) && (soma.complexo2.imaginario2 <0)){
			printf ("\n\n(%.0f-%.0fi) - (%.0f%.0fi) = %.0f+%.0fi", soma.complexo1.real, soma.complexo1.imaginario1, soma.complexo2.rea2, soma.complexo2.imaginario2, subr, subi);
	}
	else if ((soma.complexo1.imaginario1 > 0) && (soma.complexo2.imaginario2 >0)){
			printf ("\n\n(%.0f+%.0fi) - (%.0f+%.0fi) = %.0f+%.0fi", soma.complexo1.real, soma.complexo1.imaginario1, soma.complexo2.rea2, soma.complexo2.imaginario2, subr, subi);
	}
	else if ((soma.complexo1.imaginario1 > 0) && (soma.complexo2.imaginario2 < 0)){
		printf ("\n\n(%.0f+%.0fi) - (%.0f%.0fi) = %.0f+%.0fi", soma.complexo1.real, soma.complexo1.imaginario1, soma.complexo2.rea2, soma.complexo2.imaginario2, subr, subi);
	}

if ((soma.complexo1.imaginario1 < 0) && (soma.complexo2.imaginario2 > 0) && (muli < 0)){
			printf ("\n\n(%.0f%.0fi) * (%.0f+%.0fi) = %.0f%.0fi", soma.complexo1.real, soma.complexo1.imaginario1, soma.complexo2.rea2, soma.complexo2.imaginario2, mulr, muli);
	}
	else if ((soma.complexo1.imaginario1 < 0) && (soma.complexo2.imaginario2 <0) && (muli < 0)){
			printf ("\n\n(%.0f%.0fi) * (%.0f%.0fi) = %.0f+%.0fi", soma.complexo1.real, soma.complexo1.imaginario1, soma.complexo2.rea2, soma.complexo2.imaginario2, mulr, muli);
	}
	else if ((soma.complexo1.imaginario1 > 0) && (soma.complexo2.imaginario2 >0) && (muli < 0)){
			printf ("\n\n(%.0f+%.0fi) * (%.0f+%.0fi) = %.0f%.0fi", soma.complexo1.real, soma.complexo1.imaginario1, soma.complexo2.rea2, soma.complexo2.imaginario2, mulr, muli);
	}
	else if ((soma.complexo1.imaginario1 > 0) && (soma.complexo2.imaginario2 < 0) && (muli < 0)){
		printf ("\n\n(%.0f+%.0fi) * (%.0f%.0fi) = %.0f%.0fi", soma.complexo1.real, soma.complexo1.imaginario1, soma.complexo2.rea2, soma.complexo2.imaginario2, mulr, muli);
	}

	else if ((soma.complexo1.imaginario1 < 0) && (soma.complexo2.imaginario2 > 0) && (muli > 0)){
			printf ("\n\n(%.0f%.0fi) * (%.0f+%.0fi) = %.0f+%.0fi", soma.complexo1.real, soma.complexo1.imaginario1, soma.complexo2.rea2, soma.complexo2.imaginario2, mulr, muli);
	}
	else if ((soma.complexo1.imaginario1 < 0) && (soma.complexo2.imaginario2 <0) && (muli > 0)){
			printf ("\n\n(%.0f%.0fi) * (%.0f%.0fi) = %.0+f+%.0fi", soma.complexo1.real, soma.complexo1.imaginario1, soma.complexo2.rea2, soma.complexo2.imaginario2, mulr, muli);
	}
	else if ((soma.complexo1.imaginario1 > 0) && (soma.complexo2.imaginario2 >0) && (muli > 0)){
			printf ("\n\n(%.0f+%.0fi) * (%.0f+%.0fi) = %.0+f%.0fi", soma.complexo1.real, soma.complexo1.imaginario1, soma.complexo2.rea2, soma.complexo2.imaginario2, mulr, muli);
	}
	else if ((soma.complexo1.imaginario1 > 0) && (soma.complexo2.imaginario2 < 0) && (muli > 0)){
		printf ("\n\n(%.0f+%.0fi) * (%.0f%.0fi) = %.0f+%.0fi", soma.complexo1.real, soma.complexo1.imaginario1, soma.complexo2.rea2, soma.complexo2.imaginario2, mulr, muli);
	}

if ((soma.complexo1.imaginario1 < 0) && (modz != -1)){
			printf ("\n\n|%.0f%.0fi| = %f", soma.complexo1.real, soma.complexo1.imaginario1, modz);
	}
	else if ((soma.complexo1.imaginario1 < 0) && (modz == -1)){
			printf ("\n\nA expressao |%.0f%.0fi| nao existe.", soma.complexo1.real, soma.complexo1.imaginario1);
	}
	else if ((soma.complexo1.imaginario1 > 0) && (modz != -1)){
			printf ("\n\n|%.0f+%.0fi| = %f", soma.complexo1.real, soma.complexo1.imaginario1, modz);
	}
	else if ((soma.complexo1.imaginario1 > 0) && (modz == -1)){
		printf ("\n\nA expressao |%.0f+%.0fi| nao existe.", soma.complexo1.real, soma.complexo1.imaginario1);
	}
if ((soma.complexo2.imaginario2 < 0) && (modw != -1)){
			printf ("\n\n|%.0f%.0fi| = %f", soma.complexo2.rea2, soma.complexo2.imaginario2, modw);
	}
	else if ((soma.complexo2.imaginario2 < 0) && (modw == -1)){
			printf ("\n\nA expressao |%.0-%.0fi| nao existe.", soma.complexo2.rea2, soma.complexo2.imaginario2);
	}
	else if ((soma.complexo2.imaginario2 > 0) && (modw != -1)){
			printf ("\n\n|%.0f+%.0fi| = %f", soma.complexo2.rea2, soma.complexo2.imaginario2, modw);
	}
	else if ((soma.complexo2.imaginario2 > 0) && (modw == -1)){
		printf ("\n\nA expressao |%.0f+%.0fi| nao existe.", soma.complexo2.rea2, soma.complexo2.imaginario2);
	}
return 0;
}

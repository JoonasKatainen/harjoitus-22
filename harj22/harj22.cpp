#include <iostream>//d-kohta
using namespace std;
struct TIEDOT
{
	char nimi[20];
	float matka;
	int koko;
};
void TulostaKaikkiHenkilot(TIEDOT tiedot[10], int j);
void LisaaHenkilo(TIEDOT tiedot[10], int *j);
void TulostaHenkilo(TIEDOT tiedot[10]);
int Valikko(void);
int main()
{
	TIEDOT tiedot[10];
	TIEDOT t;
	TIEDOT *osoitin;
	int valinta;
	int i, j=0;
	for(i=0;i == 0;)
	{
		valinta=Valikko();
		if(valinta == 0)
		{
			cout<<"Lopetetaan"<<endl;
			i++;
		}
		if(valinta == 1)
		{
			LisaaHenkilo(&tiedot[0], &j);
			j++;
		}
		if(valinta == 2)
		{
			TulostaKaikkiHenkilot(&tiedot[0], j);
		}
		if(valinta == 3)
		{
			TulostaHenkilo(&tiedot[0]);
			
		}
		if(valinta>3||valinta<0)
			cout<<"ERROR"<<endl;
	}
return 0;
}
int Valikko(void)
{
	int valinta;
		cout<<"----------------"<<endl<<"VALIKKO"<<endl<<"0 Lopeta"<<endl<<"1 Lisaa henkilo"<<endl<<"2 Nayta kaikki henkilot"<<endl<<"3 Nayta yksi henkilo"<<endl;
		cin>>valinta;
		return valinta;
}
void TulostaHenkilo(TIEDOT tiedot[10])
{
	int k;
	cout<<"Monesko henkilo? 0-9"<<endl;
	cin>>k;
	cout<<"------------------"<<endl<<tiedot[k].nimi<<endl<<tiedot[k].matka<<endl<<tiedot[k].koko<<endl;
			
	return;
}
void TulostaKaikkiHenkilot(TIEDOT tiedot[10], int j)
{
			for(int k=0; k<j; k++)
			{
				cout<<"------------------"<<endl<<tiedot[k].nimi<<endl<<tiedot[k].matka<<endl<<tiedot[k].koko<<endl;
			}
}
void LisaaHenkilo(TIEDOT tiedot[10], int *j)
{
	TIEDOT t;
			cout<<"Anna nimi, koulumatka ja hatun koko"<<endl;
			cin>>t.nimi>>ws>>t.matka>>ws>>t.koko;
			tiedot[*j] = t;
}
/*#include <iostream>//c-kohta
using namespace std;
struct TIEDOT
{
	char nimi[20];
	float matka;
	int koko;
};
void TulostaKaikkiHenkilot(TIEDOT tiedot[10], int j);
void TulostaHenkilo(TIEDOT tiedot[10]);
int Valikko(void);
int main()
{
	TIEDOT tiedot[10];
	TIEDOT t;
	TIEDOT *osoitin;
	int valinta;
	int i, j=0;
	for(i=0;i == 0;)
	{
		valinta=Valikko();
		if(valinta == 0)
		{
			cout<<"Lopetetaan"<<endl;
			i++;
		}
		if(valinta == 1)
		{
			cout<<"Anna nimi, koulumatka ja hatun koko"<<endl;
			cin>>t.nimi>>ws>>t.matka>>ws>>t.koko;
			tiedot[j] = t;
			j++;
		}
		if(valinta == 2)
		{
			TulostaKaikkiHenkilot(&tiedot[0], j);
		}
		if(valinta == 3)
		{
			TulostaHenkilo(&tiedot[0]);
			
		}
		if(valinta>3||valinta<0)
			cout<<"ERROR"<<endl;
	}
return 0;
}
int Valikko(void)
{
	int valinta;
		cout<<"----------------"<<endl<<"VALIKKO"<<endl<<"0 Lopeta"<<endl<<"1 Lisaa henkilo"<<endl<<"2 Nayta kaikki henkilot"<<endl<<"3 Nayta yksi henkilo"<<endl;
		cin>>valinta;
		return valinta;
}
void TulostaHenkilo(TIEDOT tiedot[10])
{
	int k;
	cout<<"Monesko henkilo? 0-9"<<endl;
	cin>>k;
	cout<<"------------------"<<endl<<tiedot[k].nimi<<endl<<tiedot[k].matka<<endl<<tiedot[k].koko<<endl;
			
	return;
}
void TulostaKaikkiHenkilot(TIEDOT tiedot[10], int j)
{
			for(int k=0; k<j; k++)
			{
				cout<<"------------------"<<endl<<tiedot[k].nimi<<endl<<tiedot[k].matka<<endl<<tiedot[k].koko<<endl;
			}
}
/*#include <iostream>//b-kohta
using namespace std;
struct TIEDOT
{
	char nimi[20];
	float matka;
	int koko;
};
void TulostaHenkilo(TIEDOT tiedot[10]);
int Valikko(void);
int main()
{
	TIEDOT tiedot[10];
	TIEDOT t;
	TIEDOT *osoitin;
	int valinta;
	int i, j=0;
	for(i=0;i == 0;)
	{
		valinta=Valikko();
		if(valinta == 0)
		{
			cout<<"Lopetetaan"<<endl;
			i++;
		}
		if(valinta == 1)
		{
			cout<<"Anna nimi, koulumatka ja hatun koko"<<endl;
			cin>>t.nimi>>ws>>t.matka>>ws>>t.koko;
			tiedot[j] = t;
			j++;
		}
		if(valinta == 2)
		{
			for(int k=0; k<j; k++)
			{
				cout<<"------------------"<<endl<<tiedot[k].nimi<<endl<<tiedot[k].matka<<endl<<tiedot[k].koko<<endl;
			}
		}
		if(valinta == 3)
		{
			TulostaHenkilo(&tiedot[0]);
			
		}
		else
			cout<<"ERROR"<<endl;
	}
return 0;
}
int Valikko(void)
{
	int valinta;
		cout<<"----------------"<<endl<<"VALIKKO"<<endl<<"0 Lopeta"<<endl<<"1 Lisaa henkilo"<<endl<<"2 Nayta kaikki henkilot"<<endl<<"3 Nayta yksi henkilo"<<endl;
		cin>>valinta;
		return valinta;
}
void TulostaHenkilo(TIEDOT tiedot[10])
{
	int k;
	cout<<"Monesko henkilo? 0-9"<<endl;
	cin>>k;
	cout<<"------------------"<<endl<<tiedot[k].nimi<<endl<<tiedot[k].matka<<endl<<tiedot[k].koko<<endl;
			
	return;
}
/*#include <iostream>//a-kohta
using namespace std;
struct TIEDOT
{
	char nimi[20];
	float matka;
	int koko;
};
int Valikko(void);
int main()
{
	TIEDOT tiedot[10];
	TIEDOT t;
	int valinta;
	int i, j=0;
	for(i=0;i == 0;)
	{
		valinta=Valikko();
		if(valinta == 0)
		{
			cout<<"Lopetetaan"<<endl;
			i++;
		}
		if(valinta == 1)
		{
			cout<<"Anna nimi, koulumatka ja hatun koko"<<endl;
			cin>>t.nimi>>ws>>t.matka>>ws>>t.koko;
			tiedot[j] = t;
			j++;
		}
		if(valinta == 2)
		{
			for(int k=0; k<j; k++)
			{
				cout<<"------------------"<<endl<<tiedot[k].nimi<<endl<<tiedot[k].matka<<endl<<tiedot[k].koko<<endl;
			}
		}
	}
return 0;
}
int Valikko(void)
{
	int valinta;
		cout<<"----------------"<<endl<<"VALIKKO"<<endl<<"0 Lopeta"<<endl<<"1 Lisaa henkilo"<<endl<<"2 Nayta kaikki henkilot"<<endl;
		cin>>valinta;
		return valinta;
}
/*
#include <iostream>//perus
using namespace std;
struct TIEDOT
{
	char nimi[20];
	float matka;
	int koko;
};
int main()
{
	TIEDOT tiedot[10];
	TIEDOT t;
	int valinta;
	int i, j=0;
	for(i=0;i == 0;)
	{
		cout<<"VALIKKO"<<endl<<"0 Lopeta"<<endl<<"1 Lisaa henkilo"<<endl<<"2 Nayta kaikki henkilot"<<endl;
		cin>>valinta;
		if(valinta == 0)
		{
			cout<<"Lopetetaan"<<endl;
			i++;
		}
		if(valinta == 1)
		{
			cout<<"Anna nimi, koulumatka ja hatun koko"<<endl;
			cin>>t.nimi>>ws>>t.matka>>ws>>t.koko;
			tiedot[j] = t;
			j++;
		}
		if(valinta == 2)
		{
			for(int k=0; k<j; k++)
			{
				cout<<"------------------"<<endl<<tiedot[k].nimi<<endl<<tiedot[k].matka<<endl<<tiedot[k].koko<<endl;
			}
		}
	}
return 0;
}*/
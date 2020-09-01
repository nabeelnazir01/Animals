#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

//Error for when you enter a wrong number for selecting a animal.
void error()
{
cout<<"Please try again\n";
}

int main()

{
	int m;
	int c;
	int r;
	int n;
	int animal;
	char a;
	int b;
	int h;
	char f;
	string fname;
	string lname;
	
	
	cout<<"Hello welcome to my program\n"; //Loading screen
	cout<<"Loading";
	Sleep(1000);
	cout<<".";
	Sleep(1000);
	cout<<".";
	Sleep(1000);
	cout<<".\n";
	Sleep(1000);
	system("CLS");

	cout<<"Please enter your first and last name:"; //Asks for first and last name
	cin>> fname >> lname;
	system("CLS");
	
	for(int h=0;h<1;)
	intro: //Animal selection
	{
	system("Color 0F");
	cout<<"Hello "<<fname<<" "<<lname<<" Welcome to my program in this program you\n";
	cout<<"will learn about animals and learn how people are helping them.\n";
	cout<<"Also you will be able to calculate the population of animals.\n\n";
	cout<<"(1)Atlantic Walrus\n";
	cout<<"(2)Barn owl\n";
	cout<<"(3)Bobcat\n";
	cout<<"(4)Cerulean warbler\n";
	cout<<"(5)Canada lynx\n";
	cout<<"(6)Calculate Population\n";
	cout<<"(7)Exit\n";
	cin>>animal;
	system("CLS"); //Clears screen
	
	while (!cin)
{
cout<< "Wrong input please enter a number.\n\n"; //Error for when you don't enter a number
cin.clear();
cin.ignore();
goto intro;
}

switch ( animal ) {
	
	//Atlantic Walrus
	case 1:
	Walrus:
	{
		system("Color 6F"); //Changes color to yellow
		cout<<"Are you sure you wanted Atlantic Walrus? y=yes n=no\n"; //Asks if you wanted this option
		cin>>a;

	if (a=='y'||a=='Y')
	{
	system("CLS");
	cout<<"Description of animal\n";
	cout<<"---------------------\n";
	cout<<"With their prominent tusks and whiskers, the walrus is one of Canadas most easily recognizable arctic species.\n";
	cout<<"Globally there are two recognized sub-species of walrus, the Atlantic and Pacific. Only the Atlantic walrus occurs in Canada.\n\n";
	cout<<"Press enter when ready\n";
	cin.ignore();//Waits until you press enter
	cin.ignore();
	cout<<"Conservation status\n";
	cout<<"-------------------\n";
	cout<<"In Canada, the Atlantic walrus has been designated as special concern, and is listed as vulnerable on the IUCN Red List.\n";
	cout<<"Threats to walruses include over-hunting and climate change. Climate change can reduce the duration and\n";
	cout<<"thickness of the pack ice that walruses depend on for mating and reproduction.\n";
	cout<<"Press enter when ready\n";
	cin.ignore();
	cout<<"How people are helping\n";
	cout<<"----------------------\n";
	cout<<"On June 8, 2016, Shell Canada contributed more than 8,625 square kilometres of offshore rights in the waters of Baffin Bay,\n";
	cout<<"near Lancaster Sound, to the Nature of Conservancy of Canada (NCC).\n";
	cout<<"NCC helped to accelerate a marine conservation initiative of global significance by subsequently\n";
	cout<<"releasing the permits to the Government of Canada, to further Canadas commitment in\n";
	cout<<"protecting National Marine Conservation Areas.\n";
	cout<<"Press enter when ready\n";
	cin.ignore();
	cout<<"Would you like to go to the population calculator? y=yes n=no\n";
	cin>>f;
	
	if (f=='y'||f=='Y')
	{
	system("CLS");
	goto calculator;	//Makes it automatically go to the calculator.
	}
	
	if (f=='n'||f=='N')
	{
	system("CLS");
	break;
	}

}


if (a=='n'||a=='N') //For when you didnt want to chose this option.
{
	system("CLS");
	cout<<"Ok try again\n";
	break;
}
	else
	{
	system("CLS");
	cout<<"Invalid input\n";
	goto Walrus;
	}

}


//Barn Owl
case 2:
	Owl:
{
	system("Color 7F");
	cout<<"Are you sure you wanted Barn Owl? y=yes n=no\n";
	cin>>a;

	if (a=='y'||a=='Y')
	{
	system("CLS");
	cout<<"Description of animal\n";
	cout<<"---------------------\n";
	cout<<"The characteristic pale, heart-shaped face of the barn owl easily distinguishes it from other owls.\n"; 
	cout<<"These medium-sized owls have a wingspan of 100-125 centimetres (39-49 inches) and weigh less than\n";
	cout<<"one kilogram (two pounds). Barn owls have long legs and can measure up to 40 centimetres (16 inches) tall.\n";
	cout<<"Press enter when ready\n";
	cin.ignore();
	cin.ignore();
	cout<<"Conservation status\n";
	cout<<"-------------------\n";
	cout<<"The barn owl is considered an endangered species both federally and provincially (Ontario). Part of this situation arises\n";
	cout<<"from the fact that this year-round resident is at the northern limit of its range in the southern\n"; 
	cout<<"parts of Ontario and British Columbia. In these areas, severe winters and snow can affect prey availability.\n";
	cout<<"Press enter when ready\n";
	cin.ignore();
	cout<<"How people are helping\n";
	cout<<"----------------------\n";
	cout<<"Bird Studies Canada's Barn Owl Recovery Plan offers valuable information on how you can\n";
	cout<<"help protect barn owls in Ontario, including reporting sightings and building nest boxes.\n";
	cout<<"Habitat protection is also important for barn owls, which can be found in a diverse range of\n";
	cout<<"habitats, from marshes and grasslands to agricultural fields and deserts.\n";
	cout<<"Press enter when ready\n";
	cin.ignore();
	cout<<"Would you like to go to the population calculator? y=yes n=no\n";
	cin>>f;
	
	if (f=='y'||f=='Y')
	{
	system("CLS");
	system("CLS");
	goto calculator;	
	}
	
	if (f=='n'||f=='N')
	{
	system("CLS");
	break;
	}

}


if (a=='n'||a=='N')
{
	system("CLS");
	cout<<"Ok try again\n";
	break;
}
	else
	{
	system("CLS");
	cout<<"Invalid input\n";
	goto Owl;
	}
}


//Bobcat
case 3:
	Bobcat:
{
	system("Color 5F");
	cout<<"Are you sure you wanted Bobcat? y=yes n=no\n";
	cin>>a;

	if (a=='y'||a=='Y')
	{
	system("CLS");
	cout<<"Description of animal\n";
	cout<<"---------------------\n";
	cout<<"As both predator and prey, life is a fine balance for the bobcats of Quebec's Sutton Mountains.\n";
	cout<<"Moving stealthily through the forest, the bobcat searches for mice and rabbits,\n"; 
	cout<<"and attempts to avoid coyotes and other predators.\n";
	cout<<"Press enter when ready\n";
	cin.ignore();
	cin.ignore();
	cout<<"Conservation status\n";
	cout<<"-------------------\n";
	cout<<"Bobcats are an indicator species � the health of their population is indicative of habitat connectivity.\n";
	cout<<"Although the bobcat has managed to survive after centuries of extensive hunting and trapping,\n"; 
	cout<<"it is currently threatened by human development and urban sprawl.\n";
	cout<<"Press enter when ready\n";
	cin.ignore();
	cout<<"How people are helping\n";
	cout<<"----------------------\n";
	cout<<"The forests of NCC's recently acquired mount Burnt property, which is located in a wilderness corridor\n";
	cout<<"between Quebec and Vermont, the plains of the Missouri Coteau in Saskatchewan and the wetlands of New Brunswick's\n";
	cout<<"Musquash Estuary are all excellent examples of intact corridors and provide first-rate habitat for this wild cat.\n";
    cout<<"By working at a landscape level, NCC can protect habitat for all the species that are needed\n";
	cout<<"to maintain an area's ecological integrity.\n";
	cout<<"Press enter when ready\n";
	cin.ignore();
	cout<<"Would you like to go to the population calculator? y=yes n=no\n";
	cin>>f;
	
	if (f=='y'||f=='Y')
	{
	system("CLS");
	goto calculator;	
	}
	
	if (f=='n'||f=='N')
	{
	system("CLS");
	break;
	}

}


if (a=='n'||a=='N')
{
	system("CLS");
	cout<<"Ok try again\n";
	break;
}
	else
	{
	system("CLS");
	cout<<"Invalid input\n";
	goto Bobcat;
	}
}
//Cerulean warbler
case 4:
	Warbler:
{
	system("Color 2F");
	cout<<"Are you sure you wanted Cerulean warbler? y=yes n=no\n";
	cin>>a;

	if (a=='y'||a=='Y')
	{
	system("CLS");
	cout<<"Description of animal\n";
	cout<<"---------------------\n";
	cout<<"The cerulean warbler is an evasive bird, often heard but rarely seen because it lives\n";
	cout<<"in the tops of the tallest trees, flitting from branch to branch as it forages for food.\n";
	cout<<"But each time Dr. Henry Barnett visits the Happy Valley Forest (HVF) and hears this species'\n"; 
	cout<<"distinctive buzzing call, he recalls the day he caught a glimpse of its white belly and black necklace.\n";
	cout<<"Press enter when ready\n";
	cin.ignore();
	cin.ignore();
	cout<<"Conservation status\n";
	cout<<"-------------------\n";
	cout<<"Like many species, the cerulean warbler is threatened due to the loss of suitable habitat through forest fragmentation.\n";
	cout<<"Habitat loss in its wintering areas in South America and the loss of migratory stopover sites in Central America\n";
	cout<<"are also threats the species therefore benefits from shade-grown coffee plantations as opposed to traditional plantations.\n";
	cout<<"Press enter when ready\n";
	cin.ignore();
	cout<<"How people are helping\n";
	cout<<"----------------------\n";
	cout<<"The Nature Conservancy of Canada (NCC) is working to protect habitat for cerulean warblers throughout Ontario,\n";
	cout<<"including the Frontenac Arch, Southern Norfolk Sand Plain, Skunk's Misery and the Happy Valley Forest, where Dr. Barnett\n";
	cout<<"has not only donated land to NCC, but has been a driving force behind convincing other landowners to donate their\n";
	cout<<"properties to NCC for conservation purposes.\n";
	cout<<"Press enter when ready\n";
	cin.ignore();
	cout<<"Would you like to go to the population calculator? y=yes n=no\n";
	cin>>f;
	
	if (f=='y'||f=='Y')
	{
	system("CLS");
	goto calculator;	
	}
	
	if (f=='n'||f=='N')
	{
	system("CLS");
	break;
	}

}


if (a=='n'||a=='N')
{
	system("CLS");
	cout<<"Ok try again\n";
	break;
}
	else
	{
	system("CLS");
	cout<<"Invalid input\n";
	goto Warbler;
	}
}
//Canada lynx
case 5:
	Lynx:
{
	system("Color CF");
	cout<<"Are you sure you wanted Canada lynx? y=yes n=no\n";
	cin>>a;

	if (a=='y'||a=='Y')
	{
	system("CLS");
	cout<<"Description of animal\n";
	cout<<"---------------------\n";
	cout<<"The Canada lynx can be found throughout the boreal forest of Canada and the U.S. (Alaska),\n";
	cout<<"and its distribution stretches south of the Canadian border through the Rocky Mountains in the west\n"; 
	cout<<"and also in states surrounding the Great Lakes and northern New England region to the east.\n";
	cout<<"Press enter when ready\n";
	cin.ignore();
	cin.ignore();
	cout<<"Conservation status\n";
	cout<<"-------------------\n";
	cout<<"Populations are lowest in its U.S. distribution and in the Atlantic provinces of Nova Scotia and New Brunswick\n";
	cout<<"where the Canadian lynx is listed as critically imperiled (S1) based on NatureServe�s provincial designation.\n";
	cout<<"Their status throughout the rest of Canada is listed as secure (S5)\n"; 
	cout<<"or apparently secure (S4) (NatureServe Online Species Database 2015).\n";
	cout<<"Press enter when ready\n";
	cin.ignore();
	cout<<"How people are helping\n";
	cout<<"----------------------\n";
	cout<<"One of the ways the Nature Conservancy of Canada (NCC) is addressing the habitat needs for Lynx is through\n";
	cout<<"the completion of a Natural Area Conservation Plan (NACP) for the Restigouche watershed in northern New Brunswick\n"; 
	cout<<"and Quebec. NACPs are designed to highlight critical ecosystems and species of a particular area and outline actions\n";
	cout<<"that are needed to protect the flora and fauna that live there.\n";
	cout<<"Press enter when ready\n";
	cin.ignore();
	cout<<"Would you like to go to the population calculator? y=yes n=no\n";
	cin>>f;
	
	if (f=='y'||f=='Y')
	{
	system("CLS");
	goto calculator;	
	}
	
	if (f=='n'||f=='N')
	{
	system("CLS");
	break;
	}

}


if (a=='n'||a=='N')
{
	system("CLS");
	cout<<"Ok try again\n";
	break;
}
	else
	{
	system("CLS");
	cout<<"Invalid input\n";
	goto Lynx;
	}
}
//Calculate population
case 6:
	calculator:
{
	system("Color 3F");
	cout<<"Are you sure you wanted to calculate population? y=yes n=no\n";
	cin>>a;
	
	if (a=='y'||a=='Y')
	{
	cout<<"How many animals were marked in the first sample?\n";
	cin>>m;
	cout<<"How many animals were captured in the second sample?\n";
	cin>>c;
	cout<<"How many animals were marked in the second sample?\n";
	cin>>r;
	b=c*m;
	cout<<c<<"*"<<m<<"/"<<r<<"="<<b/r<<"\n"; //Shows calculation
	if (b/r>0)
	{
	cout<<"There are about "<<b/r<<" animals.\n"; //States how many animals
	cout<<"Press enter when ready";
	cin.ignore();
	cin.ignore();
	system("CLS");
	break;
	
}
	if (b/r<1)
	{
	cout<<"Wait how are there zero animals that's your fault.\n"; //If there are zero animals
	break;
}
}
if (a=='n'||a=='N')
{
	cout<<"ok\n";
}
	else
	{
	system("CLS");
	cout<<"Invalid input\n";
	goto calculator;
	}
}

//Error
default: //If you don't enter a valid number
	{
	cout<<"Wrong number\n\n";
	break;
	}


//Exit
case 7: //To exit the program
{
cout<<"Thank you for using my program\n";
	h=1;
}
}
}
}






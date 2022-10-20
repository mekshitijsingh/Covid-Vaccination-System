#include <stdio.h>  
typedef struct person 
{
char name[20];
char gender[20];
long int phonenumber;
long int aadharnumber;
int q;
int option;
int center;
int slot;
int age;  
}

pers;  
int main()
{  
pers p1; 

printf("\n\n\t\t*Welcome to Vaccine Registration System*");
printf("\n***************");

printf("\nEnter the details of Person:\n");  
printf("\nEnter Name: ");  
scanf("%s",&p1.name);
printf("\nEnter Gender: ");
scanf("%s",&p1.gender);
printf("\nEnter Phone Number: ");
scanf("%ld",&p1.phonenumber);
printf("\nEnter Aadhaar Number: ");
scanf("%ld",&p1.aadharnumber);
printf("\nEnter Age: ");
scanf("%d",&p1.age);
printf("\n****************");

if(p1.age>=18)
{
  printf("\nGo ahead, You are eliglible for Vaccine Registration.\n");
  printf("\nVaccines Available:");
  printf("\n1. Covaxin");
  printf("\n2. Covishield");
  printf("\n3. Pfizer");
  printf("\n\nEnter Preferred Option: ");
  scanf("%d",&p1.q);

  if(p1.q==1)
  printf("\nYou have selected Covaxin.");
  if(p1.q==2)
  printf("\nYou have selected Covidsheild.");
  if(p1.q==3)
  printf("\nYou have selected Pfizer.");

  if(p1.q<1 || p1.q>3)
  printf("\n*Invalid Input*");

  if(p1.q==1||p1.q==2||p1.q==3)
  {
    printf("\n\nCenters conducting Vaccination:");
    printf("\n 1. Rohini");
    printf("\n 2. Pitam Pura");
    printf("\n 3. Janakpuri");
    printf("\n 4. Karol Bagh");
    printf("\n 5. Vasant Kunj");
    printf("\n\nEnter Preferred Option: ");
    scanf("%d", &p1.center);

    printf("\n\nTime Slots available for Center %d:", p1.center);

    if(p1.center==1)
    {
        printf("\n1. 9am-11am");
        printf("\n2. 1pm-3pm");
        printf("\n3. 4pm-5pm");
        printf("\n\nEnter Preferred Option: ");
        scanf("%d", &p1.slot);
       
        if(p1.slot==1)
        printf("\n\nSlot Selected: 9am - 11am");

        if(p1.slot==2)
        printf("\n\nSlot Selected: 1pm - 3pm");
        
        if(p1.slot==3)
        printf("\n\nSlot Selected: 4pm - 5pm");
    }
     if(p1.center==2)
    {
        printf("\n1. 8am - 10am");
        printf("\n2. 10am - 12noon");
        printf("\n3. 12noon - 1pm");
        printf("\n\nEnter Preferred Slot: ");
        scanf("%d", &p1.slot);
       
        if(p1.slot==1)
        printf("\n\nSlot Selected: 8am - 10am");
       
        if(p1.slot==2)
        printf("\n\nSlot Selected: 10am - 12noon");

         if(p1.slot==3)
        printf("\n\nSlot Selected: 12noon - 1pm");
    }
     if(p1.center==3)
    {
        printf("\n1. 9am - 12noon");
        printf("\n2. 1pm - 3pm");
        printf("\n3. 3pm - 5pm");
        printf("\n\nEnter Preferred Slot: ");
        scanf("%d", &p1.slot);
       
        if(p1.slot==1)
        printf("\n\nSlot Selected: 9am - 12noon");
        
        if(p1.slot==2)
        printf("\n\nSlot Selected: 1pm - 3pm");
        
        if(p1.slot==3)
        printf("\n\nSlot Selected: 3pm - 5pm");
    }
     if(p1.center==4)
    {
        printf("\n1. 2pm - 4pm");
        printf("\n2. 4pm - 6pm");
        printf("\n3. 6pm - 7pm");
        printf("\n\nEnter Preferred Slot: ");
        scanf("%d", &p1.slot);
       
        if(p1.slot==1)
        printf("\n\nSlot Selected: 2pm - 4pm");
        
        if(p1.slot==2)
        printf("\n\nSlot Selected: 4pm - 6pm");

          if(p1.slot==3)
        printf("\n\nSlot Selected: 6pm - 7pm");
    }
     if(p1.center==5)
    {
        printf("\n1. 9am - 12noon");
        printf("\n2. 12noon - 3pm");
        printf("\n3. 3pm - 6pm");
        printf("\n\nEnter Preferred Slot: ");
        scanf("%d", &p1.slot);
       
        if(p1.slot==1)
        printf("\n\nSlot Selected: 9am - 12noon");
        
        if(p1.slot==2)
        printf("\n\nSlot Selected: 12noon - 3pm");
        
        if(p1.slot==3)
        printf("\n\nSlot Selected: 3pm - 6pm");
    }
    if(p1.center<1 || p1.center>5)
    printf("\n\nInvalid Center Selected. Please Select from the Available Centers only.");
    if(p1.slot<1 || p1.slot>3)
    printf("\n\nInvalid Time Slot Selected. Please Select from the Available Slots only.");
    
    printf("\n---------------------------------------");

    if((p1.slot==1 || p1.slot==2 || p1.slot==3)&&(p1.center==1 || p1.center==2 || p1.center==3 || p1.center==4 || p1.center==5))
    {
    printf("\nDetails Provided:-\n");

    printf("\nName: %s", p1.name);  
    printf("\nGender: %s", p1.gender);
    printf("\nPhone Number: %ld", p1.phonenumber);
    printf("\nAadhar Number: %ld", p1.aadharnumber);
    printf("\nAge: %d", p1.age);
    
    if(p1.q==1)
      printf("\nVaccine Type: Covaxin.\n");
    
    if(p1.q==2)
      printf("\nVaccine Type: Covidsheild.\n");
    
    if(p1.q==3)
      printf("\nVaccine Type: Pfizer.\n");

    if(p1.center==1)
    {
      printf("\nCenter: Rohini");
        if(p1.slot==1)
          printf("\nSlot: 9am - 11am");

        if(p1.slot==2)
          printf("\nSlot: 1pm - 3pm");
        
        if(p1.slot==3)
          printf("\nSlot: 4pm - 5pm");
    }
      
      
      //sha
      // Function To Take Candidate Numbers & Details
void details()
{
	int i;
	char a[20], b[6], c[40], d[20], e[20], f[3];

	// Calling Heading() Function
	heading();
	printf(
		"\t\t\t\tEnter Candidate Number (Max 4 People): ");
	scanf("%d", &n);

	// Taking Candidate Details
	for (i = 1; i <= n; i++) {
		// For Clear Screen
		system("cls");

		// Calling Heading() Function
		heading();
		printf("\t\t\t\tEnter The %dth Candidate Name: ",
			i);
		fflush(stdin);
		gets(a);
		printf("\t\t\t\tEnter The %dth Candidate Gender: ",
			i);
		fflush(stdin);
		gets(b);
		printf("\t\t\t\tEnter The %dth Candidate Id-Type: ",
			i);
		fflush(stdin);
		gets(c);
		printf(
			"\t\t\t\tEnter The %dth Candidate Id-Number: ",
			i);
		fflush(stdin);
		gets(d);
		printf("\t\t\t\tEnter The %dth Candidate Mobile "
			"Number: ",
			i);
		fflush(stdin);
		gets(e);
		printf("\t\t\t\tEnter The %dth Candidate "
			"Co-Morbidity Status (Yes or No): ",
			i);
		fflush(stdin);
		gets(f);

		// Calling Function addnode()
		addnode(a, b, c, d, e, f);
	}
}
//sha
      
      

    if(p1.center==2)
    {
      printf("\nCenter: Pitam Pura");
        if(p1.slot==1)
          printf("\nSlot: 8am - 10am");
       
        if(p1.slot==2)
          printf("\nSlot: 10am - 12noon");

         if(p1.slot==3)
          printf("\nSlot: 12noon - 1pm");
    }
    if(p1.center==3)
    {
      printf("\nCenter: Janakpuri");
        if(p1.slot==1)
          printf("\nSlot: 9am - 12noon");
        
        if(p1.slot==2)
          printf("\nSlot: 1pm - 3pm");
        
        if(p1.slot==3)
          printf("\nSlot: 3pm - 5pm");
    }

    if(p1.center==4)
    {
      printf("\nCenter: Karol Bagh");
        if(p1.slot==1)
          printf("\nSlot: 2pm - 4pm");
        
        if(p1.slot==2)
          printf("\nSlot: 4pm - 6pm");

        if(p1.slot==3)
          printf("\nSlot: 6pm - 7pm");
    }

    if(p1.center==5)
    {
      printf("\nCenter: Vasant Kunj");
        if(p1.slot==1)
          printf("\nSlot: 9am - 12noon");
        
        if(p1.slot==2)
          printf("\nSlot: 12noon - 3pm");
        
        if(p1.slot==3)
          printf("\nSlot: 3pm - 6pm");
    }
  printf("\n---------------------------------------");

  printf("\n\nWould you like to confirm the Booking?");
  printf("\n1. Yes");
  printf("\n2. No\n\n");
   scanf("%d",&p1.option);

if(p1.option==2)
  {  
       printf("\nRegistration cancelled.");
       printf("\n****************");
  }
  if(p1.option==1)
  {  
       printf("\nCongrats!! Registration successful.");
       printf("\n****************");
  }
 }
}
}
if(p1.age<18)
{
printf("\n Sorry, You are not eliglible for Vaccine Registration");
printf("\n****************");
}

printf("\nThanks for using our portal.\nPlease wear mask at all times.\nStay healthy, Stay Safe.\n\n");
}

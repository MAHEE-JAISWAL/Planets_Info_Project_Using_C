#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE_LENGTH 1000  // Maximum line length in the CSV file
#define MAX_FIELD_LENGTH 100


void venus()
{
	printf("THESE ARE SOME INFORMATION ABOUT VENUS PLANET:");
	printf("\n  1. SIZE\t\t\t\t 2. WEIGHT");
	printf("\n  3. TEMPERATURE\t\t\t 4. MOON COUNT");
	printf("\n  5. DISTANCE FROM SUN\t\t\t 6. GRAVITY ");
	printf("\n  7.ORBITAl PERIOD\t\t\t 8. RADIUS ");
	printf("\n\t\t 9. SOME INTRESTING FACTS");
	int c;
	c:
	printf("\n\n\nENTER THE NUMBER OF THE INFORMATION YOU WANT: ");
	scanf("%d",&c);
	while(1)
	{
	    
	    switch(c) 
	    {
            case 1: 
            	printf("Size of Venus is: 460.2 million km²");
                break;
            case 2:
            	printf("Weight of Venus: 4.867 × 10^24 kg");
                break;
 
            case 3:
                printf("Temperature of venus is: Venus are about 900 degrees Fahrenheit (475 degrees Celsius) – hot enough to melt lead.");
                break;
        
            case 4:
            	printf("Moon Count of venus: Venus has no moons");
             	break;
            
            case 5:
             	printf("Distance from sun: 108.3 million km");
               	break;
        	
            case 6:
            	printf("Gravity: 8.87 m/s²");
            	break;
        	
            case 7:
            	printf("Orbital period: 225 days");
        	    break;
        
            case 8:
        	    printf("Radius of venus: 6,051.8 km");
        	    break;
        	
            case 9:
        	    printf("Some Interesting facts about Venus: \nA day on Venus is longer than a year. ...\nVenus is hotter than Mercury – despite being further away from the Sun. ...\nUnlike the other planets in our solar system, Venus spins clockwise on its axis. ...\nVenus is the second brightest natural object in the night sky after the Moon.");
        	    break;
 
        	
            default:
                printf("SORRY WE HAVE THIS MUCH INFORMATION ONLY");
                break;
	    }
	    int s;
    	printf("\n\nYOU WANT ANOTHER INFORMATION ABOUT THIS PLANET ENTER 1 FOR YES AND 2 FOR NO: ");
    	scanf("%d",&s);
		if(s==1)
		{
			goto c;
		}	
		break;
	    
	}


}
void Earth()
{
	printf("THESE ARE SOME INFORMATION ABOUT EARTH PLANET:");
	printf("\n  1. SIZE\t\t\t\t 2. WEIGHT");
	printf("\n  3. TEMPERATURE\t\t\t 4. MOON COUNT");
	printf("\n  5. DISTANCE FROM SUN\t\t\t 6. GRAVITY ");
	printf("\n  7.ORBITAl PERIOD\t\t\t 8. RADIUS ");
	printf("\n\t\t 9. SOME INTRESTING FACTS");
	int c;
	c:
	printf("\n\n\nENTER THE NUMBER OF THE INFORMATION YOU WANT: ");
	scanf("%d",&c);
	while(1)
	{
	    
	    switch(c) 
	    {
            case 1: 
            	printf("Size of Earth is: 510.1 million km²");
                break;
            case 2:
            	printf("Weight of Earth: 5.972 × 10^24 kg");
                break;
 
            case 3:
                printf("The average temperature of the Earth's surface is about 59°F, or 15°C, which includes both terrestrial and marine environments. ");
                break;
        
            case 4:
            	printf("Moon Count of venus: Earth has only 1 moon");
             	break;
            
            case 5:
             	printf("Distance from sun: 149.86 million km");
               	break;
        	
            case 6:
            	printf("Gravity: 9.807 m/s²");
            	break;
        	
            case 7:
            	printf("Orbital period: 365 days");
        	    break;
        
            case 8:
        	    printf("Radius of Earth is: 6,371 km");
        	    break;
        	
            case 9:
        	    printf("Some Interesting facts about Earth: \n1. Earth isn't actually round.\n2. Coral reefs are Earth's largest living structure.\n3. Earth has a squishy interior.\n4. Antarctica is home to the largest ice sheet on Earth.\n5. The Moon is drifting away from Earth.\n6. Atacama is the driest place on Earth.\n7. Earth's magnetic pole is creeping westward.");
        	    break;
 
        	
            default:
                printf("SORRY WE HAVE THIS MUCH INFORMATION ONLY");
                break;
	    }
	    int s;
    	printf("\n\nYOU WANT ANOTHER INFORMATION ABOUT THIS PLANET ENTER 1 FOR YES AND 2 FOR NO: ");
    	scanf("%d",&s);
		if(s==1)
		{
			goto c;
		}	
		break;
	    
	}


}
void Neptune()
{
	printf("THESE ARE SOME INFORMATION ABOUT NEPTUNE PLANET:");
	printf("\n  1. SIZE\t\t\t\t 2. WEIGHT");
	printf("\n  3. TEMPERATURE\t\t\t 4. MOON COUNT");
	printf("\n  5. DISTANCE FROM SUN\t\t\t 6. GRAVITY ");
	printf("\n  7.ORBITAl PERIOD\t\t\t 8. RADIUS ");
	printf("\n\t\t 9. SOME INTRESTING FACTS");
	int c;
	c:
	printf("\n\n\nENTER THE NUMBER OF THE INFORMATION YOU WANT: ");
	scanf("%d",&c);
	while(1)
	{
	    
	    switch(c) 
	    {
            case 1: 
            	printf("Size of Neptune is: 7.618 billion km²");
                break;
            case 2:
            	printf("Weight of Neptune: 1.024 × 10^26 kg");
                break;
 
            case 3:
                printf("The average temperature on Neptune is about minus 200 degrees Celsius (minus 392 degrees Fahrenheit). ");
                break;
        
            case 4:
            	printf("Moon Count of Neptune: 14");
             	break;
            
            case 5:
             	printf("Distance from sun: 4.4728 billion km");
               	break;
        	
            case 6:
            	printf("Gravity: 11.15 m/s²");
            	break;
        	
            case 7:
            	printf("Orbital period: 164.79 years");
        	    break;
        
            case 8:
        	    printf("Radius of Neptune is: 24,622 km");
        	    break;
        	
            case 9:
        	    printf("Some Interesting facts about Neptune: \n1. Neptune is the final planet in the Solar System. ...\nNeptune is more than 30 times as far from the Sun as Earth. ...\nA year on Neptune is equivalent to 164.81 Earth Years. ...\nNeptune is an 'Ice Giant' ...\nNeptune has at least 5 rings.");
        	    break;
 
        	
            default:
                printf("SORRY WE HAVE THIS MUCH INFORMATION ONLY");
                break;
	    }
	    int s;
    	printf("\n\nYOU WANT ANOTHER INFORMATION ABOUT THIS PLANET ENTER 1 FOR YES AND 2 FOR NO: ");
    	scanf("%d",&s);
		if(s==1)
		{
			goto c;
		}	
		break;
	    
	}


}
void Jupitor()
{
	printf("THESE ARE SOME INFORMATION ABOUT JUPITOR PLANET:");
	printf("\n  1. SIZE\t\t\t\t 2. WEIGHT");
	printf("\n  3. TEMPERATURE\t\t\t 4. MOON COUNT");
	printf("\n  5. DISTANCE FROM SUN\t\t\t 6. GRAVITY ");
	printf("\n  7.ORBITAl PERIOD\t\t\t 8. RADIUS ");
	printf("\n\t\t 9. SOME INTRESTING FACTS");
	int c;
	c:
	printf("\n\n\nENTER THE NUMBER OF THE INFORMATION YOU WANT: ");
	scanf("%d",&c);
	while(1)
	{
	    
	    switch(c) 
	    {
            case 1: 
            	printf("Size of Jupitor is: 61.42 billion km²");
                break;
            case 2:
            	printf("Weight of Jupitor: 1.898 × 10^27 kg");
                break;
 
            case 3:
                printf("the temperature on Jupiter's surface is -110°C (-160°F).");
                break;
        
            case 4:
            	printf("Moon Count of Jupitor: 95 moons ");
             	break;
            
            case 5:
             	printf("Distance from sun: 743.24 million km");
               	break;
        	
            case 6:
            	printf("Gravity: 24.79 m/s²");
            	break;
        	
            case 7:
            	printf("Orbital period: about 12 Earth years");
        	    break;
        
            case 8:
        	    printf("Radius of Jupitor is: 69,911 km");
        	    break;
        	
            case 9:
        	    printf("Some Interesting facts about Jupitor: \n 1. Jupiter is the 5th planet away from The Sun. ...\nIt is the biggest planet in our Solar System. ...\nJupiter has rings, but they're too faint to see very well. ...\nJupiter has 80 moons. ...\nJupiter is a Gas Giant. ...\nA day on Jupiter is super fast. ...\nA year on Jupiter is the same as 11.8 Earth years.");
        	    break;
 
        	
            default:
                printf("SORRY WE HAVE THIS MUCH INFORMATION ONLY");
                break;
	    }
	    int s;
    	printf("\n\nYOU WANT ANOTHER INFORMATION ABOUT THIS PLANET ENTER 1 FOR YES AND 2 FOR NO: ");
    	scanf("%d",&s);
		if(s==1)
		{
			goto c;
		}	
		break;
	    
	}


}
void Mercury()
{
	printf("THESE ARE SOME INFORMATION ABOUT MERCURY PLANET:");
	printf("\n  1. SIZE\t\t\t\t 2. WEIGHT");
	printf("\n  3. TEMPERATURE\t\t\t 4. MOON COUNT");
	printf("\n  5. DISTANCE FROM SUN\t\t\t 6. GRAVITY ");
	printf("\n  7.ORBITAl PERIOD\t\t\t 8. RADIUS ");
	printf("\n\t\t 9. SOME INTRESTING FACTS");
	int c;
	c:
	printf("\n\n\nENTER THE NUMBER OF THE INFORMATION YOU WANT: ");
	scanf("%d",&c);
	while(1)
	{
	    
	    switch(c) 
	    {
            case 1: 
            	printf("Size of Mercury is: 74.8 million km²");
                break;
            case 2:
            	printf("Weight of Mercury: 3.285 × 10^23 kg");
                break;
 
            case 3:
                printf("Temperatures on Mercury are extreme. During the day, temperatures on the surface can reach 800 degrees Fahrenheit (430 degrees Celsius). Because the planet has no atmosphere to retain that heat, nighttime temperatures on the surface can drop to minus 290 degrees Fahrenheit (minus 180 degrees Celsius).");
                break;
        
            case 4:
            	printf("Moon Count of Mercury: No moon");
             	break;
            
            case 5:
             	printf("Distance from sun: Mercury is 0.4 astronomical units away from the Sun");
               	break;
        	
            case 6:
            	printf("Gravity: 3.7 m/s²");
            	break;
        	
            case 7:
            	printf("Orbital period: 88 days");
        	    break;
        
            case 8:
        	    printf("Radius of Mercury is: 2,439.7 km");
        	    break;
        	
            case 9:
        	    printf("Some Interesting facts about Mercury: \n1.Small World. Mercury is the smallest planet in our solar system – only slightly larger than Earth's Moon.\nInside Track. Mercury is the planet that orbits the closest to the Sun.\nFastest Planet. ...\nRough Surface. ...\nCan't Breathe There. ...\nMoonless. ...\nRingless. ...\nTough Place for Life. ");
 
        	
            default:
                printf("SORRY WE HAVE THIS MUCH INFORMATION ONLY");
                break;
	    }
	    int s;
    	printf("\n\nYOU WANT ANOTHER INFORMATION ABOUT THIS PLANET ENTER 1 FOR YES AND 2 FOR NO: ");
    	scanf("%d",&s);
		if(s==1)
		{
			goto c;
		}	
		break;
	    
	}


}
void Uranus()
{
	printf("THESE ARE SOME INFORMATION ABOUT URANUS PLANET:");
	printf("\n  1. SIZE\t\t\t\t 2. WEIGHT");
	printf("\n  3. TEMPERATURE\t\t\t 4. MOON COUNT");
	printf("\n  5. DISTANCE FROM SUN\t\t\t 6. GRAVITY ");
	printf("\n  7.ORBITAl PERIOD\t\t\t 8. RADIUS ");
	printf("\n\t\t 9. SOME INTRESTING FACTS");
	int c;
	c:
	printf("\n\n\nENTER THE NUMBER OF THE INFORMATION YOU WANT: ");
	scanf("%d",&c);
	while(1)
	{
	    
	    switch(c) 
	    {
            case 1: 
            	printf("Size of Uranus is: 8.083 billion km²");
                break;
            case 2:
            	printf("Weight of Uranus: 8.681 × 10^25 kg");
                break;
 
            case 3:
                printf("Uranus Temperature: Minus 320°F (-195°C)");
                break;
        
            case 4:
            	printf("Moon Count of Uranus: 27");
             	break;
            
            case 5:
             	printf("Distance from sun: 2.9352 billion km");
               	break;
        	
            case 6:
            	printf("Gravity: 8.87 m/s²");
            	break;
        	
            case 7:
            	printf("Orbital period: about 84 Earth years");
        	    break;
        
            case 8:
        	    printf("Radius of Uranus is: 25,362 km");
        	    break;
        	
            case 9:
        	    printf("Some Interesting facts about Uranus: \n1. Uranus is the seventh planet from the Sun. ...\nIt was the first planet to be discovered through a telescope. ...\nYou could fit 63 Earths inside Uranus. ...\nUranus is an 'Ice Giant' ...\nUranus has 13 rings. ...\nThe discoverer of Uranus wanted it to be called Georgium Sidus.");
        	    break;
 
        	
            default:
                printf("SORRY WE HAVE THIS MUCH INFORMATION ONLY");
                break;
	    }
	    int s;
    	printf("\n\nYOU WANT ANOTHER INFORMATION ABOUT THIS PLANET ENTER 1 FOR YES AND 2 FOR NO: ");
    	scanf("%d",&s);
		if(s==1)
		{
			goto c;
		}	
		break;
	    
	}


}
void Mars()
{
	printf("THESE ARE SOME INFORMATION ABOUT MARS PLANET:");
	printf("\n  1. SIZE\t\t\t\t 2. WEIGHT");
	printf("\n  3. TEMPERATURE\t\t\t 4. MOON COUNT");
	printf("\n  5. DISTANCE FROM SUN\t\t\t 6. GRAVITY ");
	printf("\n  7.ORBITAl PERIOD\t\t\t 8. RADIUS ");
	printf("\n\t\t 9. SOME INTRESTING FACTS");
	int c;
	c:
	printf("\n\n\nENTER THE NUMBER OF THE INFORMATION YOU WANT: ");
	scanf("%d",&c);
	while(1)
	{
	    
	    switch(c) 
	    {
            case 1: 
            	printf("Size of Mars is: 144.4 million km²");
                break;
            case 2:
            	printf("Weight of Mars is: 6.39 × 10^23 kg");
                break;
 
            case 3:
                printf("Mars Temperature: Mars can be as high as 70 degrees Fahrenheit (20 degrees Celsius) or as low as about -225 degrees Fahrenheit (-153 degrees Celsius).");
                break;
        
            case 4:
            	printf("Moon Count: Mars has two known moons, ");
             	break;
            
            case 5:
             	printf("Distance from sun: 240.25 million km");
               	break;
        	
            case 6:
            	printf("Gravity: 3.71 m/s²");
            	break;
        	
            case 7:
            	printf("Orbital period: 687 days");
        	    break;
        
            case 8:
        	    printf("Radius of Mars is: 3,389.5 km");
        	    break;
        	
            case 9:
        	    printf("Some Interesting facts about Mars: \n1.Mars is also known as the Red Planet. ...\nMars is named after the Roman god of war.\nMars has 2 moons called Deimos and Phobos. ...\nMars is the 4th planet from the sun. ...\nMars is smaller than Earth with a diameter of 4217 miles.");
        	    break;
 
        	
            default:
                printf("SORRY WE HAVE THIS MUCH INFORMATION ONLY");
                break;
	    }
	    int s;
    	printf("\n\nYOU WANT ANOTHER INFORMATION ABOUT THIS PLANET ENTER 1 FOR YES AND 2 FOR NO: ");
    	scanf("%d",&s);
		if(s==1)
		{
			goto c;
		}	
		break;
	    
	}


}
void saturn()
{
	printf("THESE ARE SOME INFORMATION ABOUT SATURN PLANET:");
	printf("\n  1. SIZE\t\t\t\t 2. WEIGHT");
	printf("\n  3. TEMPERATURE\t\t\t 4. MOON COUNT");
	printf("\n  5. DISTANCE FROM SUN\t\t\t 6. GRAVITY ");
	printf("\n  7.ORBITAl PERIOD\t\t\t 8. RADIUS ");
	printf("\n\t\t 9. SOME INTRESTING FACTS");
	int c;
	c:
	printf("\n\n\nENTER THE NUMBER OF THE INFORMATION YOU WANT: ");
	scanf("%d",&c);
	while(1)
	{
	    
	    switch(c) 
	    {
            case 1: 
            	printf("Size of Saturn is: 42.7 billion km²");
                break;
            case 2:
            	printf("Weight of Saturn: 5.683 × 10^26 kg");
                break;
 
            case 3:
                printf("Saturn Temperature: Minus 220°F (-140°C)");
                break;
        
            case 4:
            	printf("Moon Count of saturn: 145");
             	break;
            
            case 5:
             	printf("Distance from sun: 1.4591 billion km");
               	break;
        	
            case 6:
            	printf("Gravity: 10.44 m/s²");
            	break;
        	
            case 7:
            	printf("Orbital period: about 29.4 Earth years");
        	    break;
        
            case 8:
        	    printf("Radius of Saturn is: 58,232 km");
        	    break;
        	
            case 9:
        	    printf("Some Interesting facts about Saturn: \n1. Saturn is huge. ...\nYou cannot stand on Saturn. ...\nIts beautiful rings are not solid. ...\nSome of these bits are as small as grains of sand. ...\nThe rings are huge but thin. ...\nOther planets have rings. ...\nSaturn could float in water because it is mostly made of gas.");
        	    break;
 
        	
            default:
                printf("SORRY WE HAVE THIS MUCH INFORMATION ONLY");
                break;
	    }
	    int s;
    	printf("\n\nYOU WANT ANOTHER INFORMATION ABOUT THIS PLANET ENTER 1 FOR YES AND 2 FOR NO: ");
    	scanf("%d",&s);
		if(s==1)
		{
			goto c;
		}	
		break;
	    
	}


}

	
// Function to display information for a specific planet by name
void displayPlanetInfo(char pipo[], const char* filename)
 {
	int i;
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return;
    }

    char line[MAX_LINE_LENGTH];
    char field[MAX_FIELD_LENGTH];
    int found = 0;

    while (fgets(line, sizeof(line), file) != NULL) {
        // Parse the CSV line into fields
        char* token = strtok(line, ",");
        if (token != NULL) {
            // Assuming the planet name is in the first column (adjust index if needed)
            strcpy(field, token);
            if (strcmp(field, pipo) == 0) {
                found = 1;
                printf("Planet Information:\n");
                printf("Name: %s\n", field);

                // Assuming other columns contain Mass, Radius, Orbital Period, etc.
                for (i = 1; (token = strtok(NULL, ",")) != NULL; i++) {
                    if (i == 1) {
                        printf("Mass: %s Earth Masses\n", token);
                    } else if (i == 2) {
                        printf("Radius: %s Earth Radii\n", token);
                    } else if (i == 3) {
                        printf("Orbital Period: %s days\n", token);
                    }
                    // Add more fields as needed
                }
            }
        }

        if (found) {
            break; // Stop searching once the planet is found
        }
    }

    if (!found) {
        printf("No information found for the planet '%s'\n", pipo);
    }

    fclose(file);
}


int main()
{
	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tYOU ARE AT CORRECT PLACE......");
	printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tYOU WILL GET ALL INFORMATION ABOUT THE PLANETS OVER HERE.....");
	printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tOUR SOLAR SYSTEM IS MADE UP OF STARS, EIGHT PLANETS, AND COUNTLESS SMALLER BODIES SUCH AS DWARF PLANETS, ASTEROIDS AND COMMETS.");
	printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tLET'S HAVE A LOOK ON EIGHT PLANETS IN OUR SOLAR SYSTEM......");
	printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t 1.EARTH\t\t\t5. MARS");
	printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t 2.VENUS\t\t\t6. MERCUARY");
	printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t 3.SATURN\t\t\t7. JUPITOR");
	printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t 4.URANUS\t\t\t8. NEPTUNE");
	printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t 9.EXOPLANETS");
	
	while(1)
	{
		
		int n;
		char pipo[200];
		char temp;
    	const char* filename = "exoplanets.csv";  // Replace with the actual CSV file path
		n:
		printf(" \n\nENTER THE NUMBER OF THE PLANET YOU WANT TO KNOW: ");
		scanf("%d",&n);
		switch (n) 
		{
        	case 1:
            	Earth();
            	break;
 
        	case 2:
				venus();
            	break;
 
        	case 3:
            	saturn();
            	break;
        
        	case 4:
        		Uranus();
        		break;
        
        	case 5:
        		Mars();
        		break;
        	
        	case 6:
        		Mercury();
        		break;
        
        	case 7:
        		Jupitor();
        		break;
        	
        	case 8:
        		Neptune();
        		break;
        	case 9:
        		printf("\n\nENTER THE NAME OF EXOPLANET YOU WANT TO KNOW: ");
        		scanf("%c",&temp);
        		scanf("%[^\n]",pipo);
        		displayPlanetInfo(pipo, filename);
        		break;
        		
 
        	default:
            	printf("SORRY WE HAVE ONLY EIGHT PLANETS. ");
            	break;
        
    	}
    	int s;
    	printf("\n\nYOU WANT ANOTHER PLANET INFORMATION ENTER 1 FOR YES AND 2 FOR NO: ");
    	scanf("%d",&s);
		if(s==1)
		{
			goto n;
		}
		printf("Thankyou for looking at this portal");
		break;	
    }
}
	
    
	






















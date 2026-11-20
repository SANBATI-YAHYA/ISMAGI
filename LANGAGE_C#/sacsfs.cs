/*int max,a,b;
a=Convert.ToInt32(Console.ReadLine());
b=Convert.ToInt32(Console.ReadLine());
max=(a>b)?a:b;
Console.WriteLine("le max est:{0} ",max);
*/




/*
int n,f;
int d , s ;

for(n=1;n<=10;n++)
Console.Write("Enter  numbers: ",n);
f =Convert.ToInt32(Console.ReadLine());
if (f <= d)
    f=d;
    s=n;
Console.WriteLine("la valeur max {0} numero {1}",f,s);



int a = 80;
while (a >= 12)
{
    a-=12;
    Console.WriteLine(a);   

}
Console.WriteLine("le reste = {0}",a);   

    using System;

class Program
{
    static void Main()
    {
        






int a = 80;
int q=0;

while (a >= 9)
{
    a-=12;
    Console.WriteLine(a);  
    q++; 

}
Console.WriteLine("le reste = {0} , whada {1}",a,q);   




        Console.WriteLine("Maaloo lakkoofsa transakshinii galchaa (Ykn -9999 yoo barbaaddan cufachuuf):");

        while (true)
        {
            Console.Write("Gatii transakshinii galchaa: ");
            double montant = Convert.ToDouble(Console.ReadLine());

            // Yoo -9999 ta'e sagantichi ni dhaabbata (Code d'arrêt)
            if (montant == -9999)
            {
                break;
            }

            // Gatiin 0 ta'e ni dhiifama (ignorée)
            if (montant == 0)
            {
                continue;
            }

            // Yoo Maallaqni galfame (Positif) ta'e
            if (montant > 0)
              if (Math.Abs(montant) > 1000)
            {
                nbrSup1000++;
            }
        }

        // Solde Net herruu (Galchuu - Baasuu)
        double soldeNet = totalDepots + totalRetraits; // totalRetraits calqabaa irraa negative waan ta'eef walitti ida'ama

        // Bu'aa Agarsiisuu
        Console.WriteLine("\n--- BU'AA TRANSAKSHINII ---");
        Console.WriteLine($"1. Baay'ina galchuu: {nbrDepots} | Baay'ina baasuu: {nbrRetraits}");
        Console.WriteLine($"2. Gatii walii-galaa galchuu: {totalDepots} DH | Gatii walii-galaa baasuu: {totalRetraits} DH");
        Console.WriteLine($"3. Solde net (Madaallii hafe): {soldeNet} DH");
        Console.WriteLine($"4. Baay'ina transakshinii 1000 DH caalan (Absolute): {nbrSup1000}");
   
      {
                nbrDepots++;
                totalDepots += montant;
            }
            // Yoo Maallaqni baafame (Negatif) ta'e
            else if (montant < 0)
            {
                nbrRetraits++;
                totalRetraits += montant; // totalRetraits ni dabala (malli negative ta'uu danda'a)
            }

            // Gatiin guutuu (Valeur absolue) 1,000 caalu yoo ta'e
    
*/

int nbrDepots = 0;
 int nbrRetraits = 0;
int totalDepots = 0;
int totalRetraits = 0;
int nbrSup1000 = 0;

Console.WriteLine("saisaer une valeure transaction ou -9999 pour arreter le programme:");
while(true)
{
    Console.Write("saisaer une valeure transaction: ");
    int montant = Convert.ToInt32(Console.ReadLine());

    if (montant == -9999)
    {
        break;
    }

    if (montant == 0)
    {
        continue;
    }

    if (montant > 0)
    {
        nbrDepots++;
        totalDepots += montant;
    }
    else if (montant < 0)
    {
        nbrRetraits++;
        totalRetraits += montant;
    }

    if ((montant* -1) > 1000)
    {
        nbrSup1000++;
    }
}

Console.WriteLine($"nomber depots: {nbrDepots} | nomber retrait  {nbrRetraits}");
Console.WriteLine($"total depots: {totalDepots} DH | total retraits: {totalRetraits} DH");
Console.WriteLine($"nombre de transactions supérieures à 1000 DH: {nbrSup1000}");
    
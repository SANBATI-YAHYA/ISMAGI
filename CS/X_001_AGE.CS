using System;
int age;

Console.Write("Enter your age: ");

if (int.TryParse(Console.ReadLine(), out age))
{
    if (age <0)
        Console.WriteLine("MAJEUR");
    else
    {string cat = (age >=18)? "MAJEUR" : "MINEUR";
       }   Console.WriteLine($"Vous êtes {cat}.");
}
else
    Console.WriteLine("VALEUR INCORRECTE.");

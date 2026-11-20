string clientf ;
int prix;
Console.Write("saisaire votre nom: ");
clientf = Console.ReadLine();
Console.Write("saisaire le prix: ");
prix = int.Parse(Console.ReadLine());
switch (clientf)
{
    case "nor":
        if (prix > 500)
        { prix = prix - (prix * 5 / 100);
        Console.WriteLine($" vous avez droit à une remise de 5%: {prix}");
          }
        break;
    case "fid":
        if (prix < 500)
        { prix = prix - (prix * 5/ 100);
        Console.WriteLine($" vous avez droit à une remise de 5%: {prix}");}
          if ( prix > 500 && prix < 1999)
        { prix = prix - (prix * 10 / 100);
        Console.WriteLine($" vous avez droit à une remise de 10%: {prix}");
        }else if (prix > 2000)
        { prix = prix - (prix * 15 / 100);
        Console.WriteLine($" vous avez droit à une remise de 15%: {prix}");
        }
        break;
    case "pro":
     if(prix<1000)
        { prix = prix - (prix * 10 / 100);
        Console.WriteLine($" vous avez droit à une remise de 10%: {prix}");
        }
        else 
         {
        prix = prix - (prix * 20 / 100);
        Console.WriteLine($" vous avez droit à une remise de 20%: {prix}");
        }
        break;
    default:
        Console.WriteLine("bonjour client");
        break;
}

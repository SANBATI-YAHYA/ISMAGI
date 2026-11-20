 /*int DAY = Convert.ToInt32(Console.ReadLine());
switch (DAY)
{
    case 1:
         
    case 2:
        
    case 3:
       
    case 4:
        
    case 5:
               Console.WriteLine("work");
        break;

    case 6:
        
    case 7:
        Console.WriteLine("weekend");
        break;
    default:
        Console.WriteLine("Jour invalide");
        break;
}Console.ReadKey();*/


Console.Write("Entrer la note : ");
double note = Convert.ToDouble(Console.ReadLine());

string appreciation = note switch
{
     > 0 => "note un valide",
    <0 and >= 10 => "Echec",
    >= 10 and < 12 => "Passable",
    >= 12 and < 14 => "Assez bien",
    >= 14 and < 16 => "Bien",
    >= 16 and <= 20 => "Très bien",
    _=> "Note invalide"
};

Console.WriteLine(appreciation);
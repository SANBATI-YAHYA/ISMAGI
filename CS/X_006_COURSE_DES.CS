int nombreJoueurs = 3;
int nombreTours = 5;

string[] nomsJoueurs = new string[nombreJoueurs];

Console.WriteLine("=== Configuration de la Course de Des ===");
for (int i = 0; i < nombreJoueurs; i++)
{
    Console.Write($"Entrez le nom du joueur {i + 1} : ");
    nomsJoueurs[i] = Console.ReadLine();
}

int[,] historique = new int[nombreJoueurs, nombreTours + 1];
Random rand = new Random();

for (int i = 0; i < nombreJoueurs; i++)
{
    int scoreTotal = 0;
    for (int j = 0; j < nombreTours; j++)
    {
        int de = rand.Next(1, 7);
        historique[i, j] = de;
        scoreTotal += de;
    }
    historique[i, nombreTours] = scoreTotal;
}

Console.WriteLine("\n==============================================");
Console.WriteLine("          HISTORIQUE COMPLET DES LANCERS      ");
Console.WriteLine("==============================================\n");

Console.Write($"{"Joueur",-15}");
for (int t = 1; t <= nombreTours; t++)
{
    Console.Write($"Tour {t,-6}");
}
Console.WriteLine("Total");
Console.WriteLine(new string('-', 55));

int meilleurScore = -1;
int indexVainqueur = 0;

for (int i = 0; i < nombreJoueurs; i++)
{
    Console.Write($"{nomsJoueurs[i],-15}");
    for (int j = 0; j < nombreTours; j++)
    {
        Console.Write($"{historique[i, j],-10}");
    }
    int totalCourant = historique[i, nombreTours];
    Console.WriteLine($"{totalCourant}");

    if (totalCourant > meilleurScore)
    {
        meilleurScore = totalCourant;
        indexVainqueur = i;
    }
}

Console.WriteLine("==============================================\n");
Console.WriteLine($"Le vainqueur est {nomsJoueurs[indexVainqueur]} avec un score de {meilleurScore} points.");

Console.ReadKey();
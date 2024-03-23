string[] s = Console.ReadLine().Split();
int a = int.Parse(s[0]), b = int.Parse(s[1]), c = int.Parse(s[2]);
int result = 0;

if (a == b && b == c)
    result = 10000 + a * 1000;
else if (a == b || a == c)
    result = 1000 + a * 100;
else if(a !=b && b != c && a != c)
    result = Math.Max(a, Math.Max(b, c)) * 100;
else if (b == c)
    result = 1000 + b * 100;

    
Console.WriteLine(result);
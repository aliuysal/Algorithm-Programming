using System;
using System.IO;
using System.Text;

namespace ders06
{
   public class main_class
   {
      static System.Random random_generator = new System.Random();
      public static void Main(string[] args)
      {
         string raptor_prompt_variable_zzyz;
         ?? s;
         ?? t;
         ?? sayi1;
         ?? sayi2;
      
         raptor_prompt_variable_zzyz ="sayi1 gir: ";
         Console.WriteLine(raptor_prompt_variable_zzyz);
         sayi1= Double.Parse(Console.ReadLine());
         raptor_prompt_variable_zzyz ="sayi2 gir: ";
         Console.WriteLine(raptor_prompt_variable_zzyz);
         sayi2= Double.Parse(Console.ReadLine());
         t =0;
         s =sayi1;
         while (!(s>sayi2))
         {
            t =t+s;
            s =s+1;
         }
         Console.WriteLine(t);
      }
   }
}

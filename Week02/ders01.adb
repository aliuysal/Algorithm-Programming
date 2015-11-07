procedure ders01 is
   raptor_prompt_variable_zzyz : Unbounded_String;
   toplam : ??_Variable;
   sayi1 : ??_Variable;
   sayi2 : ??_Variable;
begin
   raptor_prompt_variable_zzyz :="sayi1 gir";
   Put_Line(raptor_prompt_variable_zzyz);
   Get(sayi1);
   raptor_prompt_variable_zzyz :="sayi2 gir";
   Put_Line(raptor_prompt_variable_zzyz);
   Get(sayi2);
   toplam :=sayi1+sayi2;
   Put(toplam);
end ders01;

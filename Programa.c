principal //Variable y la estoy devlarando//
{
    enpantalla ("¿De qué producto quieres el precio?")
    empantalla ("1. Tortillas");
    empantalla ("2. Manzanas");
    empantalla ("3. Refresco");
    empantalla ("4. garrafón de agua");
    empantalla ("5. Verdura");
    capturarespuesta ("%i", &opcion); //La "i" es para indicar que esperas in número//

    caso (opcion)
    {
        caso 1:
            enpantalla ("el kg de tortilla vale $21");
            rompe;
        caso 2:
            enpantalla ("el kg de manzana vale $50");
            rompe;    
        caso 3:
            enpantalla ("el refresco de litro $18");
            rompe;
        caso 4:
            enpantalla ("el garrafón de 20lt vale $40"); 
            rompe;
        caso 5:
            enpantalla("el Kg de verdura mixta vale $30");+
            rompe;
        
    }
}
Algoritmo preguntitas
    definir edad Como Entero
    Escribir "Ingrese su edad"
    leer edad
	
    Si edad < 18 Entonces
        Escribir"Eres menor de edad"
    SiNo Si edad >= 18 Y edad <= 65 Entonces
            escribir "Eres mayor de edad"
        Sino 
            Escribir "Eres jubilado"
			
			
        FinSi
    FinSi
    Definir respuesta como caracter
    Escribir"¿Te gusta el arroz con pollo? responde en si o no"
    leer respuesta
	
    Si respuesta ="si" Entonces
        Escribir "¡A mi támbien me gusta el arroz con pollo! :D"
    Sino Si respuesta ="no" Entonces
            Escribir "Oh,es una lastima. Mi comida favorita es el arroz con pollo. :("
        SiNo
            Escribir "Respuesta no válida"
        FinSi
		
    FinSi
FinAlgoritmo
Algoritmo cinco_decisiones
    Definir respuesta como caracter
    Escribir "�Te gusta el pollo, el pescado, la ensalada, la papa o la res?"
    Leer respuesta
	
    Si respuesta = "pollo" Entonces
        Escribir "Buena elecci�n, a m� tambi�n me gusta"
    Sino Si respuesta = "res" Entonces
			Escribir "Una buena carne, pero da�ina a la larga."
		Sino Si respuesta = "pescado" Entonces
				Escribir "Una buena elecci�n, es saludable y delicioso."
			Sino Si respuesta = "ensalada" Entonces
					Escribir "Opci�n saludable y fresca."
				Sino Si respuesta = "papa" Entonces
						Escribir "Rica y v�rsatil."
					Sino
						Escribir "Respuesta no v�lida"
					FinSi
				Finsi 
			FinSi
		FinSi
	FinSi
FinAlgoritmo

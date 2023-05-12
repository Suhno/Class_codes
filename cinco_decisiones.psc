Algoritmo cinco_decisiones
    Definir respuesta como caracter
    Escribir "¿Te gusta el pollo, el pescado, la ensalada, la papa o la res?"
    Leer respuesta
	
    Si respuesta = "pollo" Entonces
        Escribir "Buena elección, a mí también me gusta"
    Sino Si respuesta = "res" Entonces
			Escribir "Una buena carne, pero dañina a la larga."
		Sino Si respuesta = "pescado" Entonces
				Escribir "Una buena elección, es saludable y delicioso."
			Sino Si respuesta = "ensalada" Entonces
					Escribir "Opción saludable y fresca."
				Sino Si respuesta = "papa" Entonces
						Escribir "Rica y vérsatil."
					Sino
						Escribir "Respuesta no válida"
					FinSi
				Finsi 
			FinSi
		FinSi
	FinSi
FinAlgoritmo

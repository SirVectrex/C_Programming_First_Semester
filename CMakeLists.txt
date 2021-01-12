cmake_minimum_required(VERSION 3.17)
project(PG1 C)

set(CMAKE_C_STANDARD 99)
add_compile_options(-lm)
add_executable(PG1 main.c Uebung1/uebung1.c Uebung1/uebung1.h Uebung2/uebung2.c Uebung2/uebung2.h Uebung3/uebung3.c Uebung3/uebung3.h Uebung4/uebung4.c Uebung4/uebung4.h Uebung5/uebung5.c Uebung5/uebung5.h Uebung7/Uebung7.c Uebung7/Uebung7.h Uebung8/uebung8.c Uebung8/uebung8.h Uebung10/Uebung10.h Uebung10/Uebung10.c Uebung11/uebung11.c Uebung11/uebung11.h Uebung11/suche.c Uebung11/suche.h Zusatzuebung2/zusatzuebung.c Zusatzuebung2/zusatzuebung.h Uebung12/buch.c Uebung12/buch.h)
cmake_minimum_required(VERSION 3.16)

project(prog_estruturada_uff C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

set(EXERCISES_DIR ${CMAKE_SOURCE_DIR}/exercises)

file(GLOB EXERCISE_SOURCES ${EXERCISES_DIR}/*.c)

list(REMOVE_ITEM EXERCISE_SOURCES
	${EXERCISES_DIR}/aula_funcoes_maior_elemento.c
	${EXERCISES_DIR}/aula_funcoes_subsequentes.c
)

add_library(exercise_isotopes STATIC ${EXERCISES_DIR}/src/isotopes.c)
add_library(exercise_linked_list STATIC ${EXERCISES_DIR}/src/linked_list.c)
add_library(exercise_point STATIC ${EXERCISES_DIR}/src/point.c)
add_library(exercise_student STATIC ${EXERCISES_DIR}/src/student.c)
add_library(exercise_vector STATIC ${EXERCISES_DIR}/src/vector.c)

set(EXERCISE_LIBS
	exercise_isotopes
	exercise_linked_list
	exercise_point
	exercise_student
	exercise_vector
)

foreach(lib_name IN LISTS EXERCISE_LIBS)
	target_include_directories(${lib_name} PUBLIC ${EXERCISES_DIR}/include)
endforeach()

set(MATH_PROGRAMS
	aula_decisao_raizes
	aula_funcoes_armstrong
	aula_funcoes_mersenne
	aula_repeticao_serie_ex
	aula_repeticao_triangulos
	lab_repeticao_serie_saitama
)

set(ISOTOPES_PROGRAMS
	aula_estruturas_isotopos
)

set(LINKED_LIST_PROGRAMS
	lab_listas_encadeadas
)

set(POINT_PROGRAMS
	aula_estruturas_pontos
)

set(STUDENT_PROGRAMS
	aula_estruturas_alunos
)

set(VECTOR_PROGRAMS
	aula_estruturas_vetores
	lab_estruturas_vetor
)

foreach(source_file IN LISTS EXERCISE_SOURCES)
	get_filename_component(program_name ${source_file} NAME_WE)

	add_executable(${program_name} ${source_file})
	target_include_directories(${program_name} PRIVATE ${EXERCISES_DIR}/include)

	if(program_name IN_LIST ISOTOPES_PROGRAMS)
		target_link_libraries(${program_name} PRIVATE exercise_isotopes)
	endif()

	if(program_name IN_LIST LINKED_LIST_PROGRAMS)
		target_link_libraries(${program_name} PRIVATE exercise_linked_list)
	endif()

	if(program_name IN_LIST POINT_PROGRAMS)
		target_link_libraries(${program_name} PRIVATE exercise_point)
	endif()

	if(program_name IN_LIST STUDENT_PROGRAMS)
		target_link_libraries(${program_name} PRIVATE exercise_student)
	endif()

	if(program_name IN_LIST VECTOR_PROGRAMS)
		target_link_libraries(${program_name} PRIVATE exercise_vector)
	endif()

	if(program_name IN_LIST MATH_PROGRAMS)
		target_link_libraries(${program_name} PRIVATE m)
	endif()
endforeach()

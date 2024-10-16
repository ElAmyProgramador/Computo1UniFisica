program Nombre
    implicit none
    character(50) :: a
    integer :: i, n
    ! se crea un formato de entrada nuevo
    100 format(A50)
    print *, "Tu nombre: "
    read (*, 100) a
    print *, "Hola, ", trim(a), '!'
    print *, "Da un numero: "
    read (*,*) i
    print *, i
    ! formato para numeros reales con hasta 3 locaciones
    10 format(F6.3)
end program Nombre

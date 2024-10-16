!sucesion de fibonacci
program ej1
    !area de variables
    implicit none
    integer :: i
    integer, dimension(20) :: Fibs
    Fibs(1) = 0
    Fibs(2) = 1
    write (*,*) "Valor", 1, ":", Fibs(1)
    write (*,*) "Valor", 2, ":", Fibs(2)
    ! bucle desde i = 3, hasta i = 20, aumento de 1 en 1 (aunque no sea necesario, es mejor que no sea "redundante" y este implicito)
    do i = 3, 20, 1
        Fibs(i) = Fibs(i - 2) + Fibs(i - 1)
        write (*,*) "Valor ", i, ":", Fibs(i)
    end do
end program ej1

program ej3
    implicit none
    integer :: i, j, n
    logical :: p
    print *, "Hasta que numero deseas saber?"
    read (*,*) n
    if (n .lt. 3) then
        print *, "No tiene mucho sentido corroborrar los numeros primos menores a 3"
    else
        do i = 3, n, 1
            p = .true.
            if (mod(i, 2) .gt. 0) then
                do j = 2, i - 1, 1
                    if (mod(i, j) .eq. 0) then
                        p = .false.
                        exit
                    else
                        p = .true.
                    end if
                end do
            else
                p = .false.
            end if
            if (p .eqv. .true.) then
                print *, i, "es un numero primo"
            end if
        end do
    end if
end program ej3

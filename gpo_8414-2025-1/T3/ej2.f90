program ej2
    call Hanoi(3, A, C)
    contains
        subroutine Hanoi(n, Origen, Destino)
            if (n .eq. 1) then
                print *, "Se mueve el disco a la torre C"
            else if (n .gt. 1) then
                call Hanoi(n - 1, A, B)
                call Hanoi(n, A, C)
                call Hanoi(n - 1, B, C)
            end if
        end subroutine Hanoi
end program ej2

(defun numberpowers(x n minimo)
  (cond ((= x 0) 1)
	((< x (* minimo minimo)) 0)
	((< x 0) 0)
	(t (+ (numberpowers (- x (expt minimo n)) n (1+ minimo))
	      (numberpowers x n (1+ minimo))))))

(defun main()
  (let*((x (parse-integer(read-line)))
	(n (parse-integer(read-line))))
    (format t "~A~%" (numberpowers x n 1))))
(main)

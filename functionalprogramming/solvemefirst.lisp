(defun soma(a b)
  (+ a b))

(defun main ()
  (let*((a (parse-integer(read-line))) 
	(b (parse-integer(read-line))))
    (format t "~A~%"(soma a b))))

(main)

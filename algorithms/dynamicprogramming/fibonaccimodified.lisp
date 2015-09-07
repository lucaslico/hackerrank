(defun square(x)
  (* x x))

(defun fibonacci (a b n)
  (cond ((= n 0) a)
	((= n 1) b)
	(t (+ (square (fibonacci a b (1- n))) (fibonacci a b (- n 2))))))


(defun main()
  (let*((a  (read)) 
	(b  (read))
	(n  (read)))
    (format t "~A~%" (fibonacci a b (1- n)))))

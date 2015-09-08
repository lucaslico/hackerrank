
(defun fatorial (n)
  (if (= n 0)
      1
      (* n (fatorial (1- n)))))

(defun exponential (x &Optional(precision 9))
  (if (= precision 0)
      1.0
      (+ (/ (expt x precision) (fatorial precision)) (exponential x (1- precision)))))


(defun main()
  (let*((n (parse-integer(read-line))))
    (loop for i from 1 to n do 
	 (let*((x (read))) (format t "~A~%" (exponential x))))))

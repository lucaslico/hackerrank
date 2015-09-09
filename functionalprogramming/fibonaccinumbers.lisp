(defun fibonacci (n)
  (cond ((= n 1) 0)
	((= n 2) 1)
	(t (+ (fibonacci (- n 2)) (fibonacci (- n 1))))))

(defun main()
  (let* ((n (read)))
  (format t "~A~%"(fibonacci n))))

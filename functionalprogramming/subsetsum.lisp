(defun meio (a b)
  (floor (/ (+ a b) 2)))

(defun bsearch (*summ* s begin stop answer)
   (cond ((> begin stop) answer)
	 ((>= (aref *summ* (meio begin stop)) s) (bsearch *summ* s begin (1- (meio begin stop)) (meio begin stop)))
	 (t (bsearch *summ* s (1+ (meio begin stop)) stop answer))))

(defparameter *v* (make-array 100005 :fill-pointer 0))
(defparameter *summ* (make-array 100005 :fill-pointer 0))

  


(defun main()
  (let*((n (read)))
    (loop for i from 1 to n do
	 (let*((x (read)))
	   (vector-push x *v*)))
    (setq *v* (sort *v* #'>))
    (vector-push (aref *v* 0) *summ*)
    (loop for i from 1 to (1- n) do
	 (vector-push (+ (aref *summ* (1- i)) (aref *v* i)) *summ*))
    (let*((test (read)))
      (loop for i from 1 to test do
	   (let*((s (read)))
	     (format t "~A~%" (1+ (bsearch *summ* s 0 (1- n) -2))))))))

(main)

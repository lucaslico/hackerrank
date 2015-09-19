;;;https://www.hackerrank.com/challenges/super-digit
(defun nlist (num &optional (lst nil))
  (if (zerop num)
    lst
    (nlist (floor num 10) (push (mod num 10) lst))))


(defun superdigit (x)
  (if (> (reduce #'+ (nlist x)) 9)
      ((superdigit (reduce #'+ (nlist x))))
      (reduce #'+ (nlist x))))

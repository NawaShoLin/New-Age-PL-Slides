(defun star-line(n)
  (when (> n 0)
    (format t "*")
    (star-line (- n 1))))

(defun stars(n end)
  (when (<= n end)
    (star-line n)
    (format t "~%")
    (stars (+ n 1) end)))

(stars 1 5)
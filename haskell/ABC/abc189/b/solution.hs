--get std input in atcoder
gLines 1 list = ((v:p) <- getLine):list
gLines n list = gLines (n - 1) (((vn:pn) <- getLine):list)

main = do
  (n:x) <- getLine
  print $ gLines n x

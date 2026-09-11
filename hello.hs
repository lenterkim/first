main = do 
  putStrLn("Enter your name: ")
  name <- getLine
  putStrLn("Hello " ++ name ++ ", nice to meet you!")

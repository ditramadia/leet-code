def findSubstring(s, words):
  
  res = []
  freq = {}
  word_length = len(words[0])

  def populateFreq():
    freq.clear()
    for word in words:
      if word not in freq:
        freq[word] = 1
      else:
        freq[word] += 1
  populateFreq()

  def isFound():
    for word in freq:
      if freq[word] != 0:
        return False
    return True

  def helper(i):
    word = s[i:i+word_length]
    
    if word in words:
      freq[word] -= 1
      if freq[word] < 0:
        return False

      if isFound():
        return True
      
      return helper(i + word_length)

    return False      

  for i in range(len(s) - word_length + 1):
    if helper(i):
      res.append(i)
    
    populateFreq()
  
  return res

# s = "barfoothefoobarman"
# words = ["foo", "bar"]

# s = "wordgoodgoodgoodbestword"
# words = ["word","good","best","word"]

# s = "barfoofoobarthefoobarman"
# words = ["bar","foo","the"]

s = "wordgoodgoodgoodbestword"
words = ["word","good","best","good"]

print("res:", findSubstring(s, words))
class Solution:
    def fullJustify(self, words: List[str], maxWidth: int) -> List[str]:
        ans = []
        line,  length = [], 0
        i = 0
        
        while i < len(words):
            if length + len(line) + len(words[i]) > maxWidth:
                extra_space = maxWidth - length
                spaces = extra_space // max(1, len(line) - 1)
                remainder = extra_space % max(1, len(line) - 1)

                for j in range(max(1, len(line) - 1)):
                    line[j] += " " * spaces
                    if remainder:
                        line[j] += " "
                        remainder -= 1
                ans.append("".join(line))
                print(ans)
                line, length = [], 0 #reinit for clearing
        
            line.append(words[i])
            length += len(words[i])
            i += 1
            
        
        last = " ".join(line)
        tail = " " * (maxWidth - len(last))
        
        ans.append(last+tail)
        return ans
                
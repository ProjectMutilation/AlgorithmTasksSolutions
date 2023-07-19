#https://leetcode.com/problems/simplify-path/

class Solution:
    def simplify_path(self, path: str) -> str:
        """
        The function to converting  to the simplified canonical path
        Args:
            path (str): path to simplify

        Returns:
            str: canonical path
        """
        stack = []
        tokens = path.split('/')
        for token in tokens:
            if token not in {".", ".."} and token:
                stack.append(token)
            if token == ".." and stack:
                stack.pop()

        return "/" + "/".join(stack)

Binary trees

a binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child.

Following are the important terms with respect to tree.

Path − Path refers to the sequence of nodes along the edges of a tree.

Root − The node at the top of the tree is called root. There is only one root per tree and one path from the root node to any node.

Parent − Any node except the root node has one edge upward to a node called parent.

Child − The node below a given node connected by its edge downward is called its child node.

Leaf − The node which does not have any child node is called the leaf node.

Subtree − Subtree represents the descendants of a node.

Visiting − Visiting refers to checking the value of a node when control is on the node.

Traversing − Traversing means passing through nodes in a specific order.

Levels − Level of a node represents the generation of a node. If the root node is at level 0, then its next child node is at level 1, its grandchild is at level 2, and so on.

keys − Key represents a value of a node based on which a search operation is to be carried out for a node.

Types of binary trees
Tree terminology is not well-standardized and so varies in the literature.

A rooted binary tree has a root node and every node has at most two children.

A full binary tree

An ancestry chart which maps to a perfect depth-4 binary tree.
A full binary tree (sometimes referred to as a proper[15] or plane binary tree)[16][17] is a tree in which every node has either 0 or 2 children. Another way of defining a full binary tree is a recursive definition. A full binary tree is either:[11]
A single vertex.
A tree whose root node has two subtrees, both of which are full binary trees.
In a complete binary tree every level, except possibly the last, is completely filled, and all nodes in the last level are as far left as possible. It can have between 1 and 2h nodes at the last level h.[18] An alternative definition is a perfect tree whose rightmost leaves (perhaps all) have been removed. Some authors use the term complete to refer instead to a perfect binary tree as defined below, in which case they call this type of tree (with a possibly not filled last level) an almost complete binary tree or nearly complete binary tree.[19][20] A complete binary tree can be efficiently represented using an array.[18]

A complete binary tree (that is not full)
A perfect binary tree is a binary tree in which all interior nodes have two children and all leaves have the same depth or same level.[21] An example of a perfect binary tree is the (non-incestuous) ancestry chart of a person to a given depth, as each person has exactly two biological parents (one mother and one father). Provided the ancestry chart always displays the mother and the father on the same side for a given node, their sex can be seen as an analogy of left and right children, children being understood here as an algorithmic term. A perfect tree is therefore always complete but a complete tree is not necessarily perfect.
In the infinite complete binary tree, every node has two children (and so the set of levels is countably infinite). The set of all nodes is countably infinite, but the set of all infinite paths from the root is uncountable, having the cardinality of the continuum. That's because these paths correspond by an order-preserving bijection to the points of the Cantor set, or (using the example of a Stern–Brocot tree) to the set of positive irrational numbers.
A balanced binary tree is a binary tree structure in which the left and right subtrees of every node differ in height by no more than 1.[22] One may also consider binary trees where no leaf is much farther away from the root than any other leaf. (Different balancing schemes allow different definitions of "much farther".[23])
A degenerate (or pathological) tree is where each parent node has only one associated child node.[24] This means that the tree will behave like a linked list data structure.
class Solution

{

    private:

        bool isUnival(Node *root)

        {

            if(root == NULL)

            {

                return true;

            }

            if(root->left != NULL && root->left->data != root->data)

            {

                return false;

            }

            if(root->right != NULL && root->right->data != root->data)

            {

                return false;

            }

            if(isUnival(root->left) && isUnival(root->right))

            {

                return true;

            }

            return false;

        }

    public:

    int singlevalued(Node *root)

    {

        if(root == NULL)

        {

            return 0;

        }

        int total_count = singlevalued(root->left) + singlevalued(root->right);

        if(isUnival(root))  total_count+=1;

        

        return total_count;

    }

    

};


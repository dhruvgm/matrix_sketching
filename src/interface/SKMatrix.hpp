#import <vector>
template <typename T, typename C>
class SKMatrix {
    public:
        virtual int size(void) const = 0;
        virtual vector<int>& dimensions(void) const = 0;
        virtual C& data() const = 0;
        virtual T& mult(T& rhs) const = 0;

        // Gaussian projection
        virtual T& rand_n(int row, int col, int mean, int std) const = 0;
        virtual T& elem_div(const T a) const = 0;

        /* Count Sketch */
        virtual std::vector<int>& flip_signs(const int col...) const = 0;
        virtual std::vector<int>& bucket(const int num_buckets) const = 0;

        virtual T& count_sketch(void) const = 0;

        /* Regression */
        virtual T& concat(const T& col) const  = 0;
        virtual T& solve_x(const T& A, const T& B) const = 0;

        /* TODO: K-SVD */
        virtual T& overridce_col(const int col, const SKMatrix& B) const = 0;
        virtual vector<T> qr_decompose() const = 0;

        virtual int size(void) const = 0;
        virtual vector<int>& dimensions(void) const = 0;

        virtual SKMatrix<T>& mult(SKMatrix<T>& rhs) const = 0;

};


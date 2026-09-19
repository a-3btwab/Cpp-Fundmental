if (values.empty())
    {
        return 0;
    }

    double sum = 0;
    for (double val : values)
    {
        sum += val;
    }

    return sum / values.size();